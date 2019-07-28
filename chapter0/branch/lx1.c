/*
输入三个正整数，从小到大排序。
 */
#include<stdio.h>
int main() {
    int a, b, c, temp;

    printf("请输入三个整数：");
    printf("整数1:"); scanf("%d", &a);
    printf("整数2:"); scanf("%d", &b);
    printf("整数3:"); scanf("%d", &c);

    /*
     min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
     max = (a > b ? a : b) > c ? (a > b ? a : b) : c;

     printf("%d %d %d\n", min,a+b+c-min-max, max);

    */

    if (a > b) {

        temp = a;
        a = b;
        b = temp;

    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}



// if (a < b && b < c)
//     printf("%d %d %d\n", a, b, c);
// if (a < c && c < b)
//     printf("%d %d %d\n", a, c, b);
// if (b < a && a < c)
//     printf("%d %d %d\n", b, a, c);
// if (b < c && c < a)
//     printf("%d %d %d\n", b, c, a);
// if (c < a && a < b)
//     printf("%d %d %d\n", c, a, b);
// if (c < b && b < a)
//     printf("%d %d %d\n", c, b, a);



