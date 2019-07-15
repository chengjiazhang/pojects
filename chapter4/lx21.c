/*
输入一个非负整数，并进行逆向显示。
 */

#include <stdio.h>
int main() {
    int no;
    do {
        printf("请输入一个整数：");
        scanf("%d", &no);
        if (no <= 0)
            puts("请不要输入非正整数！！！");
    } while (no <= 0);
    puts("该整数显示的逆向结果是：");
    while (no > 0) {
        printf("%d", no % 10);
        no /= 10;
    }
    puts("。");

    return 0;
}

