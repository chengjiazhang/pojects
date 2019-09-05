/*
    输入一个整数，连续显示出该整数个 *,输出小于1时，不输出换行符。
*/
#include <stdio.h>

int main(void) {
    int no;

    printf("请输入一个正数：");
    scanf("%d", &no);

    while (no-- > 0) {
        putchar('*');
        if (no >= 1)

        {
            putchar('\n');
        }
        return 0;
    }
}