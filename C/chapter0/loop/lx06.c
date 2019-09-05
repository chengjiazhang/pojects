/*
使用循环打印正三角形、倒三角形、菱形。
 */
#include <stdio.h>
int main() {
    int i, j;

    int len = 5;

    for (i = 1; i <= len; i++) {
        for (j = 1; j <= len - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        puts("");
    }/*正三角*/

    for (i = 1; i <= len; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = 1; j <= len-i+1；; j++) {
            printf("* ");
        }
        puts("");
    }/*倒三角
    
    // for(i=1;i<len;i++)
    // {
    // 	for(j=1;j<=i;j++)
    // 		printf(" ");
    // 	for(j=1;j<=len-i;j++)
    // 	{
    // 		printf("* ");
    // 	}
    // 	puts("");
    // }
/*菱形（循环1加循环3）*/
}