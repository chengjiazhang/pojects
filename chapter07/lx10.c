/*编写rrotate函数，返回无符号整数x右移n位后的值。
编写lrotate函数，返回无符号整数x左移n位后的值。
 */

#include <stdio.h>

unsigned rrotate(unsigned x, int n) {


    return x >> n;

}

unsigned lrotate(unsigned x, int n) {
    return x << n;
}

int main() {
    unsigned uns_int;
    int move_bits;
    printf("请输入整数和移动位数：");
    scanf("%d %d,", &uns_int, &move_bits);

    printf("%u向右移%d次后的值：%u\n", uns_int, move_bits, rrotate(uns_int, move_bits));
    printf("%u向左移%d次后的值：%u", uns_int, move_bits, lrotate(uns_int, move_bits));

    return 0;

}