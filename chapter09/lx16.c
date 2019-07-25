/*
编写如下函数，实现字符串的逆向输出
 */

#include <stdio.h>

void put_stringr(const char s[]) {
    int i = 0;

    for (int i = 3; i >= 0; i--)
        printf("%c", s[i]);

}


int main() {

    char str[] = "asdf";

    put_stringr(str);
}