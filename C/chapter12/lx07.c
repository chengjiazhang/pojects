/*
代码清单12-5的程序中，结构体对象sanaka的各成员的值都有初始值。
改写这个程序，声明时不为其赋初始值，而且各成员的值从键盘输入。
 */
#include <stdio.h>

#define NAME_LEN 64

typedef struct student {        /*student可以省略*/
    char name[NAME_LEN];   /*姓名*/
    int height;            /*身高*/
    float weight;          /*体重*/
    long schols;           /*奖学金*/
} Student;

/*将std指向的学生的身高变为180cm，体重变为80kg*/
void hiriko(Student *std)
{
    if (std->height < 180) std->height = 180;
    if (std->weight > 80) std->weight = 80;
}


int main(void)
{
   Student sanaka;
    printf("请输入姓名：");scanf("%s",sanaka.name);
    printf("shengao：");scanf("%d",&sanaka.height);
    printf("tizhong：");scanf("%f",&sanaka.weight);
    printf("jiangxuejing：");scanf("%ld",&sanaka.schols);


    hiriko(&sanaka);

    printf("姓名 = %s\n", sanaka.name);
    printf("身高 = %d\n", sanaka.height);
    printf("体重 = %.1f\n", sanaka.weight);
    printf("奖学金 = %ld\n", sanaka.schols);

    return 0;
}