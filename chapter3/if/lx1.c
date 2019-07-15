/*
输入的数能被5整除吗
 */
#include <stdio.h>
int main()
{
	int no;
	printf("请输入一个整数\n");
	scanf("%d",&no);
	if(no%5)
		puts("no不能被5整除");
}