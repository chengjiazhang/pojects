/*
编写如下函数，删除字符串str内的所有数字字符。
 */
#include <stdio.h>
#include <stdlib.h>
#define N 99

void  del_digit(char *str) {
    int count=0;
    char *t;
    t = (char *)malloc(N * sizeof(char));
    while (*str) {
        if ((*str < '0') || (*str > '9')) {

            *t = *str;

            t++;
            count++;

        }
        str++;
    }
    *t = '\0';

    printf("%s\n",(t-count));

}

int main() {
    char s[] = "asc1c12d";

    del_digit(s);

    // printf("%s\n", s);

}

