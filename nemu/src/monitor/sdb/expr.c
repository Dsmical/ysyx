/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <memory/paddr.h>


enum {
  TK_NOTYPE = 256, TK_EQ=255, TK_HEXNUM=254,TK_NUM=253, \
  TK_NOTEQUAL =252,TK_AND=251,TK_OR=250,TK_REGNAME=249, \
  TK_LESSEQUAL=248,TK_DEREF=247,TK_NEG=246,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},            // spaces
  {"0x[0-9,a-f]+", TK_HEXNUM},  //hexadecimal number
  {"[0-9]+",TK_NUM},            //decimal number
  {"\\$[a-z,0-9]{2,3}",TK_REGNAME}, //register name
  {"\\(", '('},                 // left parenthesis
  {"\\)", ')'},                 // right parenthesis
  {"\\*", '*'},                 // multiply
  {"\\/", '/'},                 // divide
  {"\\+", '+'},                 // plus
  {"\\-", '-'},                 // minus
  {"==", TK_EQ},                // equalaa
  {"!=", TK_NOTEQUAL},          // not equal
  {"<=", TK_LESSEQUAL},         // less than or equal to
  {"&&", TK_AND},               // logical and
  {"\\|\\|", TK_OR},            // logical or
  {"!", '!'},                   // logical not

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[128] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

          position += substr_len;
          switch (rules[i].token_type) {
          case TK_NUM:
          case TK_HEXNUM:
          case TK_REGNAME:
            if (substr_len >= 128) {
              printf("Error: The array length is greater than 128\n");
              return false;
            }
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';  // Ensure null termination
            tokens[nr_token].type = rules[i].token_type;
            //printf("tokens:%d,str:%s\n",tokens[nr_token].type,tokens[nr_token].str);//test
            nr_token++;
            break;
            default:
            tokens[nr_token].type = rules[i].token_type;
            nr_token++;
            break;
        }
        
        break;
      }
    }
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool check_parentheses(int p, int q){
  if(tokens[p].type !='('||tokens[q].type !=')')
  return false;
  int l=p, r=q;
  while(l<r){
    if(tokens[l].type=='('){
      if(tokens[r].type==')'){
        l++;r--;
        continue;
      }
      else r--;
    }
    else if(tokens[l].type==')')return false;
    else l++;
  }
  return true;
}

static word_t Hex2Dec(char *str){
  char *endptr;
    word_t result;
    result = strtol(str, &endptr, 16);
    if (*endptr != '\0') {
        printf("Conversion error: Invalid hex string\n");
        assert(0); 
    }
    return result;
}

uint32_t eval(int p, int q) {
  bool status=false;
  if (p > q) {
    printf("Error: p>q" );
    return 0;
  }
  else if (p == q) {
    switch (tokens[q].type)
    {
      case TK_HEXNUM: return Hex2Dec(tokens[p].str);
      break;
      case TK_REGNAME: return isa_reg_str2val(tokens[p].str,&status);
      break;
      case TK_NUM: return atoi(tokens[p].str);
      break;
    default:printf("NO tokens.type: %s",tokens[q].str);assert(0);
      break;
    }
  }
  else if (check_parentheses(p, q) == true) {
    return eval(p + 1, q - 1);
  }
  else {
    int op_type=-1;
    int op = -1;
    int num_paren=0;
    /*step1: logical */
    for(int i=p;i<=q;i++){
      switch (tokens[i].type ) {
      case TK_EQ:
      case TK_NOTEQUAL:
      case TK_LESSEQUAL:
      case TK_AND:
      case TK_OR:
        op=i;
        op_type=tokens[i].type ;
        break;
      default: break; 
      }
    }
    /*step2: '+'and'-' */
    if(op==-1){         
      for(int i=p;i<=q;i++){
        switch (tokens[i].type ) {
        case '+':
        case '-':
        if(num_paren==0){
          op=i;
          op_type=tokens[i].type ;
          }
          break;
        case '(':
          num_paren+=1;
          break;
        case ')':
          num_paren-=1;
          break;
        default: break;
        }
        // printf("i=%d p=%d q=%d op=%d num_paren=%d type=%d\n",i,p,q,op,num_paren,tokens[i].type);
      }
    }
     /*step3: '*'and'/' */
    if(op==-1){           
      for(int i=p;i<=q;i++){
        switch (tokens[i].type ) {
        case '*':
        case '/':
        if(num_paren==0){
          op=i;
          op_type=tokens[i].type ;
          }
          break;
        case '(':
          num_paren++;
          break;
        case ')':
          num_paren--;
          break;
        default: break;
        }
      }
    }
    /*step4: '*'derefrence and'$' '-'negative */
    if(op==-1){
      for(int i=p;i<=q;i++){
        switch (tokens[i].type ) {
        case TK_DEREF:
        case '!':
        case TK_REGNAME:
        case TK_NEG:
        if(num_paren==0){
          op=i;
          op_type=tokens[i].type ;
          }
          break;
        case '(':
          num_paren++;
          break;
        case ')':
          num_paren--;
          break;
        default: break;
        }
      }
    } 
    //test p 0x80100000+($a0+5)*4-*($t1+8)+1
   // printf("p=%d q=%d op=%d num_paren=%d\n",p,q,op,num_paren);
   uint32_t val2 = eval(op + 1, q);
   uint32_t val1 = 0;
   /*Initialize val1 to 0 to avoid errors in the case of negative signs or 
   dereferences in the front of tokens:like *0x80000000 or --1*/
   if (op == p && (tokens[op].type == TK_NEG || tokens[op].type == TK_DEREF)) {
      val1 = 0; } 
    else { 
      val1 = eval(p, op - 1);}
  
   
    switch (op_type) {
      case '+': return val1 + val2;break;
      case '-': return val1 - val2;break;
      case '*': return val1 * val2;break;
      case '/': return val1 / val2;break; 
      case '!': return !val2;break;
      case TK_DEREF : return paddr_read(val2,4);break;
      case TK_EQ: if(val1==val2)return 1;else return 0;break;
      case TK_NOTEQUAL: if(val1!=val2)return 1;else return 0;break;
      case TK_LESSEQUAL: if(val1<=val2)return 1;else return 0;break;
      case TK_AND: if(val1&&val2)return 1;else return 0;break;
      case TK_NEG: return -val2;break;
      default: assert(0);
    }
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  /* pretreatment:dereference and negative numbers  */
  for (int i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '+'|| \
    tokens[i - 1].type == '-'||tokens[i - 1].type == '*'||\
    tokens[i - 1].type == '/')) {
    tokens[i].type = TK_DEREF;
    }
    if (tokens[i].type == '-' && (i == 0 || tokens[i - 1].type == '+'|| \
    tokens[i - 1].type == '-'||tokens[i - 1].type == '*'||\
    tokens[i - 1].type == '/')) {
    tokens[i].type = TK_NEG;
    }
  }
  *success = true ;
  word_t result = eval(0, nr_token-1);
  printf("state:%d\t value:%d \n ",*success,result);
  return result;
}


