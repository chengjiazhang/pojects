/*
编写一个程序，确认只要没有发生高位溢出，则

无符号整数位左移后的值等于其乘以2的指数幂后的值。
无符号整数位右移后的值等于其除以2的指数幂后的值。
 */
#include <stdio.h>

#include <limits.h>

int main() {
    unsigned uns_int;

    puts("请输入一个整数：");

    do {
        scanf("%u", &uns_int);
        if (uns_int > UINT_MAX)
            printf("您输入的整型过大，请重新输入。");
    } while (uns_int > UINT_MAX);


    printf("把整数向左移动3位后其值等于其乘以2的指数幂后的值：%u = %u\n", uns_int << 3, uns_int * 2 * 2 * 2);
    printf("把整数向右移动3位后其值等于其乘以2的指数幂后的值：%u = %u", uns_int >> 3, uns_int / 2 / 2 / 2);

    return 0;

}