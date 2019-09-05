/*
    打开与关闭文件
*/
#include <stdio.h>

int main(void) {
    FILE *fp;
    fp = fopen("abc.txt", "r");

    if (fp == NULL)
        printf("\a无法打开文件。\n");
    else {
        printf("\a成功打开了文件。\n");
        fclose(fp);
    }

    return 0;
}