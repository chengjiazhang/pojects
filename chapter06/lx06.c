/*
创建一个函数，返回int型整数的立方。
 */

#include <stdio.h>

int cube(int x)
{
	return x*=x*x;
}

int main(void)
{
	int n;
puts("请输入1个整数。");
    printf("整数n:"); scanf("%d", &n);
    printf("%d的立方是%d\n",n,cube(n));
    return 0;

}