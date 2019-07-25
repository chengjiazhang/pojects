/*
    读取两个实数值，用实数显示出它们的和、差、积、商
*/
#include <stdio.h>

int main(void)
{
    double x, y; /* 浮点数 */

    puts("请输入两个数。");
    printf("实数x："); scanf("%lf", &x);//小写英文字母l
    printf("实数y："); scanf("%lf", &y);

    printf("x + y = %f\n", x + y);
    printf("x - y = %f\n", x - y);
    printf("x * y = %f\n", x * y);
    printf("x / y = %f\n", x / y);

    return 0;
}