#include <stdio.h>
int main() {
    int x, y;
    printf("请输入俩个整数：\n");
    printf("整数x："); scanf("%d", &x);
    printf("整数y："); scanf("%d", &y);
    printf("您输入的俩个整数是：%d %d\n", x, y);
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x %% y = %d\n", x % y);

    return 0;

}