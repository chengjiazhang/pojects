/*
设计一个函数int func(int a,int b,int c)，
若a，b，c能构成等边三角形函数返回3，
若能构成等腰三角形函数返回2，
若能构成一般三角形函数返回1，
若不能构成三角形函数返回0。
 */
#include <stdio.h>

int func(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {


        if (a == b && b == c) {
            return 3;
        }


        else if (a == b || a == c || b == c) {
            return 2;
        }

        else
            return 1;


    }

    else
        return 0;
}
int main(void) {
    int a, b, c, d;

    printf("请输入三个数：");
    scanf("%d\n%d\n%d", &a, &b, &c);
    d = func(a, b, c);
    printf("%d", d);
    return 0;
}