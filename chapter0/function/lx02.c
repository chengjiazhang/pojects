/*
设计一个函数int days(int year,int month,int day)，
当用户输入年月日时，计算出该日期是这一年的第几天。
 */
#include <stdio.h>
int isLeepyear(int year) {
   if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    return 1;
else
    return 0;
}

int days(int year, int month, int day) {
    int days = day;
    switch (month - 1) {
    case 11: days += 30;

    case 10: days += 31;

    case 9: days += 30;

    case 8: days += 31;

    case 7: days += 31;

    case 6: days += 30;

    case 5: days += 31;

    case 4: days += 30;

    case 3: days += 31;

    case 2: if (isLeepyear(year))
            days += 29;
        else
            days += 28;

    case 1: days += 31;
        break;

    default: return 0;

    }
    return days;
}



int main(void) {
    int year, month, day;
    printf("请输入年月日");
    scanf("%d %d %d", &year, &month, &day);

    printf("是%d年的第%d天", year, days(year, month, day));
}