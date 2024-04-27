#include "hhh.h"
int main () {
    FILE *log_fp = NULL;
    log_fp = stdout;

    // 注意这里修改为 log_fp，以符合上文定义的变量名
    Log("Log is written to %s", log_fp == stdout ? "stdout" : "unknown destination");
    return 0;
}
