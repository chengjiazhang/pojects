/*
现定义如下函数式宏，其功能为返回x、y中的较大值。
 */
#include <stdio.h>

#define max(x,y) (((x)>(y))?(x):(y))

int main() {
    int a, b, c, d;
    printf("请输入四个整数：");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    printf("%d\n", max(a, b));
    printf("%d\n", max(c, d));
    printf("%d\n", max(max(a, b), max(c, d)));

    // printf("%d\n", max(a, b));
    // printf("%d\n", max(max(a, b), c));
    // printf("%d\n", max(max(max(a, b), c), d));




    return 0;


}