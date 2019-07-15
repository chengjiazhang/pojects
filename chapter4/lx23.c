/*编写一段程序，读取一个正整数，显示其位数。
*/
#include <stdio.h>
int main()
{
int no,t=0;
printf("请输入一个整数：");
		scanf("%d",&no);
 while (no > 0) {
        
        t++;
        no /= 10;
    }

printf("输入%d位\n",t);

}