/*
    显示输入的整数值以下的偶数
*/
#include <stdio.h>
int main() {
    int no,i;
    printf("显示输入的整数：");
    scanf("%d", &no);

    for (i = 2; i <= no; i += 2)
        printf("%d\n", i);
}