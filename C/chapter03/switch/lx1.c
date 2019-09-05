/*
显示除以3的余数
*/
#include<stdio.h>
int main() {
    int no;
    printf("请输入一个整数：\n");
    scanf("%d", &no);
    if (no % 3 == 0)
        puts("该数能被3整除。");
    else if (no % 3 == 1)
        puts("余数是1.");
    else
        puts("余数是2.")	;
    return 0;
}