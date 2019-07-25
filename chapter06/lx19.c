/*
创建一个函数，返回元素个数为 n 的 int 型数组 v 中的最小值。
 */
#include <stdio.h>


int min_of( int v[], int n) {
    int i, min;
    
    for (i = 0; i < n; i++) {

        printf("v[%d]:", i);
        scanf("%d", &v[i]);
    }
    min=v[0];
    for (i = 1; i < n; i++) {
        if (v[i] <= min)
            min = v[i];
    }
    return min;
}

int main() {

    int i, m;

    printf("请输入一个整数："); scanf("%d", &m);

    int d[m];
    printf("最小值是%d\n", min_of( d, m) );
    return 0;

}