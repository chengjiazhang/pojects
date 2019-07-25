/*
将三个数升序排列
 */

#include <stdio.h>

void swap(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

void sort3(int *n1,int *n2,int *n3){
if(*n1>*n2)
	swap(n1,n2);
if(*n1>*n3)
	swap(n1,n3);
		if(*n2>*n3)
	swap(n2,n3);
}

int main(void) {
    int na, nb,nc;

    puts("请输入san个整数。");
    printf("整数A:"); scanf("%d", &na);
    printf("整数B："); scanf("%d", &nb);
    printf("整数C："); scanf("%d", &nc);

    sort3(&na, &nb,&nc);

    puts("将两数的值按升序排列。");
    printf("整数A是%d。\n", na);
    printf("整数B是%d。\n", nb);
    printf("整数C是%d。\n", nc);

    return 0;
}

