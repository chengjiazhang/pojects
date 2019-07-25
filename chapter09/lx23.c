/*
 编写如下函数，将所接收的字符串数组中存储的n个字符串的字符逆向显示
 */
#include<stdio.h>
#define STR_NUM 2

void rev_string(char s[][128], int n) {
    char tmp[STR_NUM][128];
    int ch_num = 0;
    int i;
    int j;
    for (i = 0; i < STR_NUM; i++) {
        while (s[i][ch_num] != '\0') {
            ch_num++;
        }
        for (j = 0; j < ch_num; j++) {
            tmp[i][j] = s[i][ch_num - 1 - j];
        }
        for (j = 0; j < ch_num; j++) {
            s[i][j] = tmp[i][j];
        }
    }

    return;
}

int main(void) {
    int i;
    char s[STR_NUM][128];
    for (i = 0; i < STR_NUM; i++) {
        printf("s[%d] = ", i);
        scanf("%s", s[i]);
    }
    rev_string(s, STR_NUM);
    printf("after rev_string function:\n");
    for (i = 0; i < STR_NUM; i++) {
        printf("s[%d] = %s\n", i, s[i]);
    }
    printf("\n");

    return 0;
}

