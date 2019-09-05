/*
编写一段程序，为九九乘法表增加横纵标题。
 */
#include <stdio.h>

int main() {
    int i, j;
    printf("  |");
    for (i = 1; i <= 9; i++) {
        printf("%2d", i);
    }

    printf("\n");
    for (i = 1; i <= 32; i++)
        printf("-") ;
    printf("\n") ;
    for(i=1;i<=9;i++)
    {
    	printf("%2d|",i);
    	for(j=1;j<=9;j++)
    	{
    		printf("%4d",i*j);
    	}
printf("\n");
    }
return 0;


}