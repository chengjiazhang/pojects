/*
b不是a的约数

*/
#include<stdio.h>
int main() {
    int a, b;
    printf("请输入俩个整数：");
    puts("整数a："); scanf("%d", &a);
    puts("整数b："); scanf("%d", &b);
    if (a % b)
        puts("b不是a的约数");
    else
        puts("b是a的约数");
}