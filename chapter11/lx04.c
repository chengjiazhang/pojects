/*
在代码清单11.4中，各数组的字符串个数3是作为常量嵌在程序
（for语句的控制表达式）中的。
请编写一段程序，将其改写为通过计算求出。
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    int i;

    char a[][5] = {"LISP", "C", "Ada", "PHP"};

    int len1 = sizeof(a) / sizeof(a[0]);

    char *p[] = {"PAUL", "X", "MAC"};

    int len2 = sizeof(p) / sizeof(*p);

    for (i = 0; i < len1; i++) {
        printf("a[%d] = \"%s\"\n", i, a[i]);
    }

    for (i = 0; i < len2; i++) {
        printf("p[%d] = \"%s\"\n", i, *(p + i));
    }

    return 0;
}

