/*编写一段程序，输入一个整数值，显示该整数值以下的所有奇数。
*/
#include <stdio.h>
int main()
{int no,i;
	printf("请输入一个整数：");
scanf("%d",&no);
for(i=1;i<=no;i=i+2)
printf("%d\n",i);
}