/*判断一个数的正负
*/
#include<stdio.h>
int main()
{
	int number;
	puts("请输入一个整数");
	scanf("%d",&number);
	if(number==0)
		puts("该数是0");
	else if(number>0)
		puts("gaishu是正数");
	else
		puts("gaishu是负数");
}