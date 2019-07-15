/*
编写一段程序，显示出身高和标准体重的对照表。
显示的身高范围和间隔由输入的整数值进行结控制，标准体重精确到小数点后2位。
 */
#include <stdio.h>
int main() {
    int High1 = 0, High2 = 0;
    float weight = 0;
    int n = 0;
    printf("开始数值（cm）:");
    scanf("%d", &High1);
    printf("结束数值（cm）:");
    scanf("%d", &High2);
    printf("间隔值（cm）:");
    scanf("%d", &n);
    for (int i = High1; i <= High2; i += n) {
        weight = (i - 100) * 0.9; 
        printf("%d cm %.2f\n", i, weight);  
    }
    return 0;
}