
#include <memory/paddr.h>
#include <getopt.h>

extern "C" void init_disasm(const char *triple);
void init_parse_elf(const char *elf_file);
void init_log(const char *log_file);
void init_mem() ;
void init_difftest(char *ref_so_file, long img_size, int port);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}
static char *elf_file = NULL;
static char *img_file = NULL;
static char *log_file = NULL;
static char *diff_so_file = NULL;
static int difftest_port = 1234;
// static __uint8_t pmem[0x8000000] PG_ALIGN = {};
// static __uint8_t* guest_to_host(__uint32_t paddr) { return pmem + paddr - 0x80000000; }
static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"help"     , no_argument      , NULL, 'h'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-hl:e:d:p:", table, NULL)) != -1) {
    switch (o) {
      case 'l': log_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-e,--elf=FILE           elf file to be parsed\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}
void assert_fail_msg() {
  // isa_reg_display();
  // IFDEF(CONFIG_ITRACE, iringbuf_display());//iringbuf 打印输出
  // statistic();
  printf("erro 111111 assert_fail_msg");
}
void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */
  /* Parse arguments. */
  parse_args(argc, argv);
  
  init_log(log_file);

  init_parse_elf(elf_file);

  init_mem();//默认镜像写入
  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  //init_difftest(diff_so_file, img_size, difftest_port);

  init_disasm("riscv32-pc-linux-gnu");//初始化反汇编器
  
  welcome();
}
