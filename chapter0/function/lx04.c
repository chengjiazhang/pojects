/*
设计一个函数，求输入的整数以内的所有素数（只能被1和自己整除）
 */
#include <stdio.h>
int func(int num) {
    for (int i = 2; i <= num; i++) {
    	if(num%i==0)
    		break;
        else
        	if(num==i+1)
        printf("%d\n", num);

}
return 0;
}

    int main(void) {
        int num;
        printf("请输入一个整数：\n");
        scanf("%d", &num);
        puts("2");
        for (int i = 2; i <=num; i++) {
            func(i);
                }
            // else
            // 	continue;

        }

    