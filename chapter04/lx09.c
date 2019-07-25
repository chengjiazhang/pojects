/*
    从输入的整数开始倒数到0,输入负数，不换行
*/
#include <stdio.h>
int main() {
    int i, no;
    printf("请输入一个整数：");
    scanf("%d", &no);
    while (no >= 0) {
        printf("%d ", no);
        no--;
    }
    if (no < 0) {
        return 0;
    }
    printf("\n");
    
}
