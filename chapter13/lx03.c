/*
编写程序，从键盘读入文件名，消去该名称的文件的内容。

※以只写模式打开文件即可(用只写模式"w"打开文件后，文件的内容就被消除了。
 */
#include <stdio.h>

int main() {
    FILE *fp;
    char s[99];
    printf("请输入文件名：");
    scanf("%s", s);

    fp = fopen(s, "w");
    if (fp == NULL)
        printf("\a无法打开文件。\n");
    else {
        printf("\a成功打开了文件。\n");
        fclose(fp);
    }

    return 0;
}