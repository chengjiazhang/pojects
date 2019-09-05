/*
编写一段程序，根据输入的整数，循环显示 1234567890 ，显示的位数和输入的整数值相同
 */
#include <stdio.h>
int main(void) {
    int num, i;

    printf("请输入一个整数:");
    scanf("%d", &num);
    printf("循环结果为:");
    for (i = 1; i <= num; i++) {
        switch (i % 10) {
        case 1 : printf("1"); break;
        case 2 : printf("2"); break;
        case 3 : printf("3"); break;
        case 4 : printf("4"); break;
        case 5 : printf("5"); break;
        case 6 : printf("6"); break;
        case 7 : printf("7"); break;
        case 8 : printf("8"); break;
        case 9 : printf("9"); break;
        default : printf("0"); break;
        }

    }
    return 0;
}


