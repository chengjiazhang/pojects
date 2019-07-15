/*
显示九九乘法表的直角三角形
 */
#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++)
            printf("%2d*%2d=%2d", i, j, i * j);
        printf("\n");
    }

}