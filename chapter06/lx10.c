/*
创建一个函数，返回1到n之间所有整数的和。
 */
#include <stdio.h>
 int sumup(int n){
int sum=0;
	int i;
	for(i=1;i<=n;i++){
		sum+=i;
	}
return sum;
}

int main()
{
	int m;
	printf("请输入一个整数：");scanf("%d",&m);
	printf("1到%d的和是%d\n",m,sumup(m) );
	return 0;
}