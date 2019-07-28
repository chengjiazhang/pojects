/*
每瓶可乐3块钱，
喝完后瓶子可以退回1块钱，输入金额，输出最多可以喝到多少瓶可乐
 */
#include <stdio.h>
int main()
{
	int change;
	int money;/*钱*/
	int back=1;
	int price=3;/*可乐单价*/
	int temp=0;/*每次可以购买多少瓶可乐*/
	int count=0;/*能喝到的可乐数*/
	printf("请输入金额：");
	scanf("%d",&money);
	while(money>price)
	{
		temp=money/price;
		change=money%price;
		count+=temp;
		money=change+temp*back;
	}

	printf("最多能喝%d瓶可乐。",count);

}