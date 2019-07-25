/*
不使用下标运算符，编写如下函数，
若字符串S中含有字符C（若含有多个，
以先出现的为准），则返回指向该字符的指针，
否则返回空指针。
 */

#include <stdio.h>

char *str_chr(  char *s, int c) {

    char *p = NULL;
    while (*s++) {

        if (*s == c) {
            p = s;


            break;
        }
    }

    return p;
}

int main() {
    char *str = "ABBCc";
    char c;
    // printf("请输入字符串："); scanf("%s", str);
    // getchar();

    printf("请输入要查找的字符："); scanf("%c", &c);

    printf("返回的地址是：%p\n", str_chr(str, c) );

}
