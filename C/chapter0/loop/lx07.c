/*
一张纸的厚度大约是0.08mm，
对折多少次之后能达到珠穆朗玛峰的高度（8848.13米）
 */

#include <stdio.h>
int main() {
    
    int count = 0;
    double num = 0.00008;
    
    while (1) {
        num = num * 2;
        count++;
        if (num >= 8848.13)
            break;
    }
    
    printf("对折%d次后达到了高度", count);
}