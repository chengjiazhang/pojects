/*
改写代码清单6-16的程序，将两次考试的分数存储在三维数组中。
*/


#include <stdio.h>



void mat_print(const int m[4][2][3] ) {
    int i, j, k;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 3; k++)

                printf("%4d", m[i][j][k]);
    putchar('\n');
}


int main() {
    int i, j, k;
    int tensu[4][2][3] = { { {91, 63, 78}, {97, 67, 82} }, { {67, 72, 46}, {73, 43, 46} }, { {89, 34, 53}, {97, 56, 21} }, { {32, 54, 34}, {85, 46, 35} } };
    mat_print(tensu);
    return 0;

}

