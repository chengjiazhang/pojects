/*编写一段程序，输入一个整数，显示出输入整数层的金字塔形状。
 提示：第i行显示 (i - 1) * 2 + 1 个 ‘*’。
 */
#include <stdio.h>

int main(void) {
    int i , j, len;

    puts("生成金字塔。");
    printf("层数："); scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = 1; j <= len-i; j++)
            putchar(' ');

        for (j = 1; j <= (i-1)*2+1 ; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}