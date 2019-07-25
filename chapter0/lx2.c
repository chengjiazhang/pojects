/*
请输入星期几的第一个字母来判断一下是星期几，
如果第一个字母一样，则继续判断第二个字母。Mon,Tue,W,T,F,Sa,Sun
 */
#include <stdio.h>
int main() {
    char a, b, c;
    printf("请输入字母：");
    printf("字母a:"); scanf("%s", &a);

    switch (a) {
    case 'm': printf("今天是周一。\n"); break;
    case 't': printf("请继续输入字母："); scanf("%s", &b);

        switch (b) {
        case 'u': printf("今天是周二。\n"); break;
        case 'h': printf("今天是周四。\n"); break;
        default: return 0;
        }
        break;

    case 'w': printf("今天是周三。\n"); break;

    case 'f': printf("今天是周五。\n"); break;

    case 's': printf("请继续输入字母："); scanf("%s", &c);

        switch (c) {
        case 'u': printf("今天是周日。\n"); break;
        case 'a': printf("今天是周六。\n"); break;
        default: return 0;
        }
        break;

    default: return 0;
    }
}