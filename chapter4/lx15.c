/*
编写一段程序，显示出小于输入的整数的所有2的乘方。
 */

#include <stdio.h>

int main(void) {

int  no, t;

printf("请输入一个正整数：");
scanf("%d", &no);
t = 1;
if (no < 2) {
    return 0;
}
while (2 * t < no) {


    printf("%d ", t * 2);
    printf("\n");
    t = t * 2;
}
}

