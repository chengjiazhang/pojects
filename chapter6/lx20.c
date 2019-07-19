/*创建一个函数，对元素个数为n的int型数组v进行倒序排列。
 */

#include <stdio.h>
void rev_intary(int v[], int n) {

    int i, temp;

    for (i = 0; i < n; i++) {
        printf("v[%d]:", i); scanf("%d", &v[i]);
    }

    printf("\n");

    for (i = 0; i < n / 2; i++) {
        temp = v[n - i - 1];
        v[n - i - 1] = v[i];
        v[i] = temp;
    }

    for (i = 0; i < n ; i++)
        printf("v[%d]:%d\n", i , v[i]);

}

int main() {
    int n;

    printf("请输入一个整数："); scanf("%d", &n);

    int v[n];

    rev_intary(v, n);
    return 0;

}
