/*
判断一个数是否是素数和质数
 */

#include <stdio.h>
int main()
{
int num;
int i;
int t;
printf("请输入一个整数：\n");
scanf("%d",&num);
for(i=2;i<num;i++)
{
	if(num%i==0){
		puts("不是素数。");
		return 0;
	}
}

puts("是素数。");
return 0;
}