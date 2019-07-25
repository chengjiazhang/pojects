/*字符串和字符串数组
*/
#include <stdio.h>
#include <ctype.h>

#define put_str_ln(s) (put_(str(s),putchar('\n'))

/*用“”将字符串s扩起来显示*/
void put_str(const char *s)
{
	putchar('\"');

	while(*s)
		putchar(*s++);
	putchar('\"');
}