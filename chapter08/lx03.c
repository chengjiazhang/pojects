/*
请定义一个函数式宏diff
 */

#include <stdio.h>
#define diff(x,y) (x-y)

int main() {
    int x, y;

    printf("请输入两个整数：");
    scanf("%d %d", &x, &y);



    return diff(x, y);
}