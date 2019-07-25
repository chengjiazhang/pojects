/*
编写一段程序，使之连续显示*,总个数等于所输入的整数值。另外，当输入0以下的整数时，则什么也不显示。
*/
#include<stdio.h>

int main(void) {

int num;
int i = 1;
printf("正整数：");
scanf("%d", &num);
if (num <= 0)
    return 0;
while (i <= num) {
    putchar('*');
    putchar('\n');
    i++;
}
}