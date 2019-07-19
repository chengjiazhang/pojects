/*
创建一个函数search_idx，
将和有n个元素的数组v中的key相等的所有元素的下标存储在数组idx中，
返回和key相等的元素的个数。
 */

#define NUMBER 5
#include <stdio.h>

int search_idx(const int v[] ,int idx[],int key,int n)
{
	int i,j=0,m;
	for(i=0;i<n;i++)
	{
		if(v[i]==key)
		{
			idx[j++]=i;
		}
	}
return j;
}

int main(void)
{
	int i, ky,j;
    int vx[NUMBER];
    int idx[NUMBER];

    for (i = 0; i < NUMBER; i++)
    {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }
    printf("要查找的值:");
    scanf("%d", &ky);

    j=search_idx(vx,idx,ky,NUMBER);
    for(i=0;i<j;i++)
    	printf("idx[%d]:%d",i,idx[i]);

    return 0;
}

