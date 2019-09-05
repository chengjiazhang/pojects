/*
不使用下标运算符，实现代码清单9-11的
str_toupper函数和str_totower函数。
 */

#include <stdio.h>

#include <ctype.h>


void str_toupper(char *str) {
    while (*str)
        *str = toupper(*str++);
}


void str_tolower(char *str) {
    while (*str)
        *str = tolower(*str++);
}



int main(void) {
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);

    str_toupper(str);
    printf("大写字母：%s\n", str);

    str_tolower(str);
    printf("小写字母：%s\n", str);

    return 0;
}