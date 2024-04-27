#include <stdio.h>




int main(int argc, char *argv[])
{
    switch (6) {
          case 2:
          case 1:
          case 3:
            printf("2!\n");
            printf("1!\n");
            printf("3!\n");
            break;
          default:
            printf("5\n");
            printf("6!\n");
            printf("7!\n");
            break;
        }
    return 0;
}
