/*
    编写一段程序，按照升序显示出小于输入值的所有正偶数。
*/
#include <stdio.h>

int main(void) {
    int i, no, t;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 1;
    t = 0;

    if (no < 0) {
        return 0;
    }
    while (t < no) {
        t = 2 * i;
        printf("%d \n", t);
        i++;
    }

}


