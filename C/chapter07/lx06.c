/*
创建一个程序，显示如下所示的各表达
 */
#include <limits.h>
#include <stdio.h>
int main() {
   unsigned  int n;
    printf("sizeof(1)=%u\n", (signed)sizeof(1));
    printf("sizeof(+1)=%u\n", (signed)sizeof(+1));
    printf("sizeof(-1)=%u\n", (signed)sizeof(-1));
    printf("sizeof(unsigned)-1=%u\n", (unsigned)sizeof -1);
    printf("sizeof(double)-1=%u\n", (double)sizeof -1);
     printf("sizeof((double)-1)=%u\n", sizeof((double)-1));
printf("sizeof n+2=%u\n",(signed)sizeof n+2);
printf("sizeof(n+2)=%u\n",(signed)sizeof(n+2));
printf("sizeof(n+2.0)=%u\n",(signed)sizeof(n+2.0));

}