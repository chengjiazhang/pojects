/*
计算出输入俩整数之间的和
 */


#include<stdio.h>
int main() {
    int a, b, i, sum, temp;
    printf("请输入两个整数：");
    printf("整数1:"); scanf("%d", &a);
    printf("整数2:"); scanf("%d", &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    i = a;
    do {
        sum += i;
        i++;

    } while (i <= b);
    printf("sum is %d", sum);

    return 0;

}