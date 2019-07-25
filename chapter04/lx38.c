/*
    显示直角在右下方的等腰直角三角形
*/
#include <stdio.h>

int main(void)
{
	int length;
	printf("请输入边长：\n");scanf("%d",&length);
	for(int i=1;i<=length;i++)
	{
		for(int j=1;j<=length-i;j++)
			{printf(" ");}
		for(int j=1;j<=i;j++){
			printf("*");
		
		}

	putchar('\n');
	}
}