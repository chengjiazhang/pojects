/*
编写一个函数，使字符串s为空字符串。
 */

#include <stdio.h>

void null_string(char s[]) {

    s[0] = '\0';
}

int main() {

    char s[] = "asdddddd";

    null_string(s);
    printf("%s\n", s);

    return 0;
}