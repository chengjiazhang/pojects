/*对代码清单5-3中的程序进行修改，从头顺次为数组中的元素赋值5,4,3,2,1。
*/
#include <stdio.h>

int main(void) {
    int i, t;
    int x[5];
    t = 5;
    for (i = 0; i < 5; i++) {
        x[i] = t;


        printf("x[%d] = %d\n", i, x[i]);
        t--;
    }

    return 0;
}