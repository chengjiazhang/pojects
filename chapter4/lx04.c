/*
    判断输入的整数的符号
*/
#include <stdio.h>

int main(void) {
    int no, number;

    printf("请输入一个整数：");
    scanf("%d", &no);

    do {
        if (no == 0)
            puts("该整数为0");
        else if (no > 0)
            puts("该整数为正数");
        else
            puts("该整数为负数");
        printf("是否继续。   【yes....0/No.....9】");

        scanf("%d", &number);
    } while (number == 0);

    return 0;
}