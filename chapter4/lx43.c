/*
对代码淸单4-17中的程序进行修改，显示出一个横向较长的长方形

※读取两个边的边长，以较小的数作为行数，以较大的数作为列数。

 */
#include <stdio.h>

int main(void) {
    int i , j;
    int n, m, temp;

    puts("让我们来画一个长方形。");
    printf("整数1："); scanf("%d", &n);
    printf("整数2："); scanf("%d", &m);
    if (n > m) {
        temp = n;
        n = m;
        m = temp;

    }
    for (i = 1; i <= n; i ++) {
        for (j = 1; j <= m; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}