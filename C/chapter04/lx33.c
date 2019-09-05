/*
编写一段程序，显示1到n的整数值的二次方。
 */
#include <stdio.h>
int main() {
    int i, n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d的二次方是%d\n", i, i * i);
    }
    return 0;
}