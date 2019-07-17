#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bbsearch(const int *, const int *, size_t, size_t);//, int *);
int compare(const void *p, const void *q);
int compare1(const void *p, const void *q);

int main()
{
	int a[5] = {5,4,3,2,1};
	
	qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]),compare);

	int i, key=9;
	int res;
	for(i = 0;i < 5;i++)
	{
		printf("%d\t", a[i]);
	}
	
	bbsearch(&key, a,sizeof(a) / sizeof(a[0]), sizeof(a[0]));//, compare1);
//	if(res == NULL)
	{
//		printf("key not found\n");
	}
//	else
	{
//		printf("found\n");
	}
	
}
int compare(const void *p, const void *q)
{
	if(*(int *)p < *(int *)q)
	{
		return -1;
	}
	else if(*(int *)p > *(int *)q)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int compare1(const void *p, const void *q)
{
	if(*(int *)p < *(int *)q)
	{
		return -1;
	}
	else if(*(int *)p > *(int *)q)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void bbsearch(const int *key, const int *a, size_t nmem, size_t size)//, int compare1)
{
	int i;
	int flag = 1;
	for(i = 0;i <= nmem;i++)
	{
		if(*key == a[i])
		{
			printf("key found\n");
			flag = 0;
		}
	}
	if( flag == 1)
	{
		printf("not fnd\n");
	}
}

