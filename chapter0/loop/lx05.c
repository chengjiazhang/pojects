/*
本金10000元存入银行，年利率是千分之三，
每过一年将本金和利息之和作为新的本金，计算5年后可获取多少元？
 */
#include <stdio.h>
int main() {
    int benjin = 10000;
    double lixi = 0.003;
    double sum;
    for (int i = 1; i <= 2; i++) {

        sum = benjin * lixi + benjin;
        benjin = benjin * lixi + benjin;
    }
    printf("可获取%f元", sum);
    return 0;
}