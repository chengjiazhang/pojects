/*
编写一段程序，求 1 到 n 的和。 n 的值从键盘输入。
 */
#include <stdio.h>
int main() {
    int i, no, sum = 0;
    printf("请输入一个整数：");
    scanf("%d", &no);
    for (i = 1; i <= no; i++) {
        sum += i;
    }
    printf("和是%d", sum);
}