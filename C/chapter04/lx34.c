/*
编写一段程序，输入一个整数值，显示该整数个’*’。每显示5个就进行换行。
 */
#include <stdio.h>
int main() {
    int i, n, b=0;
    printf("请输入一个整数：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (b == 5) {
            printf("\n");
            b = 0;
        }
        printf("*");
        b++;


    }
    return 0;
}