/*
使用代码清单6-3中的sqr函数创建另一个函数，返回int型整数的四次幂。
 */
#include <stdio.h>

int sqr(int x)
{
	return x*x;
}
int pow4(int x)
{
	return sqr(x)*sqr(x);
}

int main()
{
	int n;
	printf("整数a：");scanf("%d",&n);
	printf("%d的四次方是%d\n",n,pow4(n));
	return 0;
}