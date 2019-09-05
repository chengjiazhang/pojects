/*
不使用下标运算符，编写如下函数，显示字符串s。
 */
#include <stdio.h>
void put_string(const char *s) {
    while (*s) {
        printf("%c", *s++);
    }
    puts("");
}

int main(void) {
    char *str = "ABC";
    // printf("请输入要打印的字符：");
    // scanf("%c", str);

    put_string(str);
}