#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入俩个整数：");
	printf("请输入整数1：");scanf("%d",&a);
	printf("请输入整数2:");scanf("%d",&b);
	printf("前者是后者的 %.2f%%\n",(float)a/b*100);
}