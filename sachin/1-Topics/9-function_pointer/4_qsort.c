#include <stdio.h>
#include <stdlib.h>

int compare(const void *p, const void *q);

int main()
{
	int a[5] = {5, 4, 3, 2, 1};

	qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), compare);

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}

	printf("\n");
}

int compare(const void *p, const void *q)
{
	if (*(int *)p < *(int *)q)
	{
		return -1;
	}
	else if (*(int *)p > *(int *)q)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
