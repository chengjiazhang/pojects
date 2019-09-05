/*
    显示当前日期和时间
*/
#include <time.h>
#include <stdio.h>

int main(void) {
    time_t current = time(NULL);/*当前日历时间*/
    struct tm *timer = localtime(&current);/*分解时间（当地时间）*/
    char *wday_name[] = {"日", "一", "二", "三", "四", "五", "六"};
    printf("当前日期和时间为%d年%d月%d日（%s）%d时%d分%d秒\n",
           timer->tm_year + 1900,
           timer->tm_mon + 1,
           timer->tm_mday,
           wday_name[timer->tm_wday],
           timer->tm_hour,
           timer->tm_min,
           timer->tm_sec
          );
    return 0;
} 