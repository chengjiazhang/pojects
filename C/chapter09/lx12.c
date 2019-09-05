/*
写如下函数，若字符串s中含有字符c(若含有多个，以先出现的为准)，
则返回该元素的下标值，否则返回-1。
 */

#include <stdio.h>

int str_char(const char s[], char c) {
    int i = 0;
    while (s[i]) {
        if (s[i] == c)
            return i;
        i++;

    }
    return i = -1;
}

int main() {
    char s[] = "asssssddwe";
    char c;
    printf("请输入指定字符");
    scanf("%c", &c);

    printf("%d\n", str_char(s, c));

    return 0;

}