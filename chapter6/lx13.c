/*
创建一个函数，连续发十次响铃
 */
#include <stdio.h>

void alert(int n)
{
	int i;
	for(i=1;i<=n;i++)
		puts("\a");
}

int main()
{
	int m;
	printf("请输入响铃次数\n");scanf("%d",&m);
	alert(m);
return 0;
}