/*
编写一段程序，求4行3列矩阵和3行4列矩阵的乘积。各构成元素的值从键盘输入。
 */
#include <stdio.h>
int main() {
    int x[4][3], y[3][4], z[4][4];
    int i, j, k;
    puts("请输入x[4][3]的值：");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &x[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &y[i][j]);
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; j++) {
            z[i][j] = 0;
            for (k = 0; k < 4; k++)
            {z[i][j] += x[i][k] * y[k][j];}
        }/* code */
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%d ", z[i][j]);
        printf("\n");
    }

    return 0;



}