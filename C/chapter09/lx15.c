/*
编写如下函数，使字符串s显示n次。
 */

#include <stdio.h>

void put_string(const char s[], int n) {
    int i = 0, j = 0;

    while (i < n) {
        printf("%s\n", s);
        i++;

    }

}

int main() {
    int n = 5;
    char str[99];
    printf("请输入字符串：");
    scanf("%s", str);

    put_string(str, n);
}