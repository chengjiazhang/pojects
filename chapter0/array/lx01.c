/*
有一个数列：8,54,27,11,23,344,82，将这8个元素按从小到大的顺序排列。
 */

#define number 8
#include <stdio.h>
int main() {

    int n[number] = {8, 54, 27, 11, 23, 344, 82};
    int i, j, temp;


    for (i = 0; i < number - 1; i++) {
        for (j = number - 1; j > i; j--) {
            if (n[j] < n[j - 1]) {
                temp = n[j];

                n[j] = n[j - 1]	;
                n[j - 1] = temp;
            }

        }
    }
    for (i = 0; i < number; i++)
        printf("n[%d]:%d\n", i, n[i] );
    return 0;
}