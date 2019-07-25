/*
13-2程序按身高排序
 */

#include <stdio.h>

int main(void) {
    FILE *fp;
    int i=0;
    int ninzu = 0;           /*人数*/
    char name[100];          /*姓名*/
    double height, weight;   /*身高、体重*/
    double hsum = 0.0;       /*身高合计*/
    double wsum = 0.0;       /*体重合计*/
char heights[];
    if ((fp = fopen("hw.dat", "r")) == NULL) /*打开文件*/
        printf("\a文件打开失败！！！\n");
    else {
        while (fscanf(fp, "%s%lf", name, &height) == 2) {
            
heights[i]=height;
            printf("%-10s  %5.1f\n", name, height);
            ninzu++;
            hsum += height;
          i++;
        }
        for(i=0;i<ninzu;i++)


        printf("------------------\n");
        printf("平均    %5.1f ", hsum / ninzu);
        fclose(fp); /*关闭文件*/
    }

    return 0;
}