/*编写一段程序输入两个整数，如果它们的差值小于等于10,则显示“它们的差小于等于10”。否则，显示“它们的差大于等于11”。
*/
#include <stdio.h>

int main() {

int a, b;
printf("请输入二个整数：");
printf("整数1:"); scanf("%d", &a);
printf("整数2:"); scanf("%d", &b);
if (a-b<=10)
    puts("差值小于等于10");
else 
	puts("差值大于等于11");
}