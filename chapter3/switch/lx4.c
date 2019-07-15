/*
    输入的整数是奇数还是偶数
*/
#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    switch(no){
        case 0:puts("输入的整数是偶数");break;

        case 1:puts("输入的整数是奇数");break;
    
    }
    
    return 0;
}