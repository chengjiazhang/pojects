/*
对代码清单12-7的程序进行改写。

不将姓名、身高等数据作为初始值，而是从键盘输入。

可以选择按身高进行升序排列，或者按照姓名的顺序排列。
 */
#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

/*表示学生的结构体*/
typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

/*将x和y指向的学生进行交换*/
void swap_Student(Student *x, Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

/*将学生数组a的前n个元素按身高进行升序排列*/
void sort_by_height(Student a[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

void sort_by_name(Student a[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (strcmp(a[j - 1].name, a[j].name) > 0) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void) {
    int i;
    Student std[NUMBER] ;

    for (i = 0; i < NUMBER; i++) {

        printf("%d号姓名：", i + 1); scanf("%s", std[i].name);
        printf("%d号身高：", i + 1); scanf("%d", &std[i].height);
        printf("%d号体重：", i + 1); scanf("%f", &std[i].weight);
        printf("%d号奖金：", i + 1); scanf("%ld", &std[i].schols);
    }

    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);

    sort_by_height(std, NUMBER);

    puts("\n按身高排序。");

    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);

    sort_by_name(std, NUMBER);

    puts("\n按姓名排序。");

    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);


    return 0;
}