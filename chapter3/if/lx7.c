/*
判断一个数的奇偶
*/


#include<stdio.h>
int main()
{
	int number;
	puts("请输入一个整数");
	scanf("%d",&number);
	if(number>0)
		if(number%2)
			puts("该数是奇数");
		else 
			puts("该数是偶数");
		else
			puts("该shu不是正数");
	}