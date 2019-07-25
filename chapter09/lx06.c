/*
如何让下述初始化賦值得到的字符串s变成空字符串?请编写程序实现。
 */
#include <stdio.h>

int main() {
    char s[] = "ABC";
    s[0] = '\0';

    printf("%s\n", s);


}