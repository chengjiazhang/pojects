/*
编写如下函数，返回字符串s中字符c的个数(没有则返回0)。
 */

#include <stdio.h>

int str_chnum(const char s[], int c) {
    int i = 0,num=0;

    while (s[i]) {
        if (s[i] == c) 
            num++;
        i++;

       
    }
    
    return num;
}

int main() {
    char s[] = "asadsdwqwd", c;

    int i = 0;

    printf("请输入目标字符："); scanf("%c", &c);

    printf("%d\n", str_chnum(s, c));


}