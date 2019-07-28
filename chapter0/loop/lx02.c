/*
输入俩个数，计算他们的最小公倍数和最大公约数
 */
#include <stdio.h>

int swap(int a, int b) {
    int temp;
    if (a < b) {
        temp = b;
        b = a;
        a = temp;
    }
    return 0;
}/*交换*/

int gcd (int a, int b) {
    swap(a, b);
    int temp;
    while (b) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}/*最大公约数*/

int main() {
    int a, b;
    int temp ;
    
    printf("%d",temp);
    printf("请输入俩个数：");
    scanf(" %d %d", &a, &b);
     temp= a * b;
    a= gcd(a, b);
    printf("最大公约数是：%d,最小公倍数是：%d", a, temp/a);
    return 0;

}