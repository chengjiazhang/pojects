/*
    从输入的整数开始倒数到0
*/
#include <stdio.h>
int main()
{
	int i,no;
	printf("请输入一个整数：");
	scanf("%d",&no);
	while(no>=0)
	{
		printf("%d ", no);
		no--;
	}
printf("\n");

    return 0;
}