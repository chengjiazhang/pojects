/*
画一个长方形
 */
#include <stdio.h>
int main() {
    int length, width;
    printf("请输入长：\n"); scanf("%d", &length);
    printf("请输入宽：\n"); scanf("%d", &width);
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= width; j++)
            putchar('*');
        putchar('\n');
    }
}