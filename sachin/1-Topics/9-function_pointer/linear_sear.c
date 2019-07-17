#include <stdio.h>
#include <stdlib.h>
#define size 20

int compare(const void *p, const void *q);
int main()
{
	int array[5];
	int i,
	int res = 0;
	static int key;

	printf("enter the num:");
	for (i = 0; i < 5; i++)
	{
	scanf("%d", &array[i]);
	}
	
	qsort(array, sizeof(array)/sizeof(array[0]), sizeof(array[0]),compare);
	
	for (i = 0; i < 5; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");

	printf("enter the key");
	scanf("%d", &key);

	for (i = 0; i < 5; i++)
	{
		res = bsearch(&key, array, sizeof(array)/sizeof(array[0]), sizeof(array), compare);
	}
	if(res == 0)
	{
		printf("key not present");
	}
	else
	{
		printf("key present");
	}
	exit(1);
}

//function defination
int compare(const void *a, const void *b)
{
	if(*(int *)a < *(int *)b)
	{
		return -1;
	}
	else if (*(int *)a > *(int *)b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
}
