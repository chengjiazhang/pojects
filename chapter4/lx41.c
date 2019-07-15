/*
显示边长为n的正方形
 */
#include <stdio.h>
int main() {
    int i, j, length;
    printf("请输入边长\n");
    scanf("%d", &length);
    for (i = 1; i <= length; i++) {


        for (j = 1; j <= length; j++)
            printf("*");
        putchar('\n');
    }
    return 0;
}