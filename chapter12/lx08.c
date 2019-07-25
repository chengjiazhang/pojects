/*
编写如下函数，从键盘输入int型、long型和double型的值，
将这些值作为xyz结构体的成员，返回该结构体的值。
*/
#include <stdio.h>

struct xyz {
    int x;
    long y;
    double z;
};

struct xyz xyz_of(int x, long y, double z)
{
    struct xyz temp;

    temp.x = x;
    temp.y = y;
    temp.z = z;
    return temp;
}

struct xyz scan_xyz()
{
	struct xyz s;
	printf("请输入三个值：");scanf("%d %ld %lf",&s.x,&s.y,&s.z);
return s;
}
int main(void)
{
    struct xyz s=scan_xyz();



    printf("xyz.x = %d\n", s.x);
    printf("xyz.y = %ld\n", s.y);
    printf("xyz.z = %f\n", s.z);

    return 0;
}