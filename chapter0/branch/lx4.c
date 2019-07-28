/*
输入某年某月，打印出该月天数，注意大小月以及闰年。
 */
#include<stdio.h>
int main()
{
	int year,month;
	printf("请输入年： 月：");
	scanf("%d %d",&year,&month);
	if(year%4){
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 12:
		printf("%d月有31天",month);break;
		case 4:
		case 6:
		case 9:
		case 10:
		case 11:
		printf("%d月有30天",month);break;
	case 2:printf("%d月有28天",month);break;}
}
else
{
	switch(month){
case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 12:
		printf("%d月有31天",month);break;
		case 4:
		case 6:
		case 9:
		case 10:
		case 11:
		printf("%d月有30天",month);break;
	case 2:printf("%d月有29天",month);break;}
}
}