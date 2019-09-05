/*输入n个整数并计算他们的和
*/
#include <stdio.h>
int main()
{int n;
	int m;
	int sum=0;
	do{
		printf("请输入整数：");
		scanf("%d",&n);
		sum+=n;
		printf("是否继续：yes.....1|no......0\n");
		scanf("%d",&m);
	}while(m==1);
	printf("和：%d\n",sum);
return 0;
}