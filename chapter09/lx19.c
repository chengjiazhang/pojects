/*
编写如下函数，将字符串s中的数字字符全部删除。
 */

#include <stdio.h>

void  del_digit(char s[]) {
    int i = 0, j = 0;
    char t[999];
    while (s[i]) {
        if (s[i] < '0' || s[i] > '9') {

            t[j] = s[i];

            j++;
        }
        i++;
    }

    // for (i = 0; i < j; i++) { 
    // 	s[i] = t[i];
    // }
    
    // s[j] = '\0';
   
printf("%s\n",t);

}




int main() {
    char s[] = "asc1c12d";

    del_digit(s);

    // printf("%s\n", s);

}



