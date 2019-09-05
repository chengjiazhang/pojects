/*
不使用下标运算符，编写如下函数，
返回字符串s中字符c的个数（若不存在,则为0）。
 */
#include <stdio.h>

int str_chnum(const char *s, int c) {
    int count = 0;
   
    while (*s++) {
       
    if (*s == c)
       count++;
    return count;
}

}

int main() {
    int c;
    char *s ;
    printf("请输入字符串：");
    scanf("%s",s);

    printf("请输入目标字符：");scanf("%c",&c);

    str_chnum(s,c);
}