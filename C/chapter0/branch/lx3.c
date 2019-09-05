/*
输入学生成绩，如果大于等于80输出“优秀”，
70～79输出“良好”，60～69输出“及格”，低于60输出“不及格”。
 */
#include<stdio.h>
int main() {
    int grade;
    printf("请输入成绩：");
    scanf("%d", &grade);
    if (grade >= 80)
        puts("优秀！");
    if (grade >= 70 && grade <= 79)
        puts("良好！");
    if (grade >= 60 && grade <= 69)
        puts("及格！");
    if (grade < 60)
        puts("不及格！");
}