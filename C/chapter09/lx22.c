/*
编写一段程序，对代码清单9-12进行如下改写。
1、将字符串的个数3改为更大的数，将其值定义为对象式宏。
2、将字符串的字符数6改为128,将其值也定义为对象式宏。
3、生成读取字符串数组的函数。和练习9-3—样，在读取"$$$$$“时停止读取操作。
4、显示”$$$$$"前输入的所有字符串。

 */

#include <stdio.h>
#include <string.h>

#define NUMBER1 5

#define NUMBER2 128

void put_stary(char s[NUMBER1][NUMBER2],int n){
for (int i = 0; i < NUMBER1; i++) {


        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (strcmp (s[i], "$$$$$") == 0)
            break;
    }

}

int main() {
    int i;
    char s[NUMBER1][NUMBER2]={"Turbo", "NA", "DOHC","$$$$$"};


    

    for (i = 0; i < NUMBER1; i++) {
        if (strcmp(s[i], "$$$$$") == 0)
            break;
        printf("s[%d]=\"%s\"\n", i, s[i]);
    }

    return 0;
}