/*
三数中几个数能相等
 */



#include <stdio.h>

int main() {

int a, b, c, d, e;
printf("请输入三个整数：");
printf("整数1:"); scanf("%d", &a);
printf("整数2:"); scanf("%d", &b);
printf("整数3:"); scanf("%d", &c);
if (a == b && b == c)
    puts("三个都相等");
else if (a == b || a == c || b == c)
    puts("俩个都相等");
else
    puts("都不相等");
}