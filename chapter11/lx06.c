/*
将字符串复制到d
 */
#include <stdio.h>

char str_copy(char *d,const char *s)
{
	char *t=d;
	while(*d++=*s++);
	return t;
}

int main(void)
{
	char str[128]="ABC";
	char tmp=[128];

	printf("str=\"%s\"\n",str);

	printf("复制到是：");

	scanf("%s"，tmp);

	str_copy(str,tmp);

	puts("复制了。");

	printf("str=\"%s\"\n",str);

	return 0;
}