/*
设计一个函数void pyramid(int n)，n为正整数，输出n行数字金字塔，
第n行显示n%10，每个数字后跟一个空格，如n=3如下所示：
 */
#include <stdio.h>

void pyramid(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = n-i; j>0; j--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d ", i % 10);
    printf("\n");
    }

}

int main(void) {
    int n = 5;
    pyramid(5);
}