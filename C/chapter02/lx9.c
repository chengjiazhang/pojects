#include<stdio.h>

int main(void) {

    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    printf("您的标准体重是[%.1f]", (n - 100) * 0.9);
    return 0;
}

