/*
创建一个函数，
对元素个数为 n 的 int 型数组 v2 进行倒序排列，
并将其结果保存在数组 v1 中。
 */
#include <stdio.h>

void intary_rcpy(int v1[],  int v2[], int n) {
    int i, temp1,temp2;

    for (i = 0; i < n; i++) {
        printf("v1[%d]:", i); scanf("%d", &v1[i]);
    }

    printf("\n");

    for (i = 0; i < n / 2; i++) {
        temp1 = v1[n - i - 1];
        v1[n - i - 1] = v1[i];
        v1[i] = temp1;}
        
        for (i = 0; i < n ; i++)
        	v2[i]=v1[i];

    for (i = 0; i < n ; i++)
        printf("v2[%d]:%d\n", i , v2[i]);


}

int main() {
    int n;

    printf("请输入一个整数："); scanf("%d", &n);

    int v2[n], v1[n];
    intary_rcpy(v1, v2, n);

    return 0;

}