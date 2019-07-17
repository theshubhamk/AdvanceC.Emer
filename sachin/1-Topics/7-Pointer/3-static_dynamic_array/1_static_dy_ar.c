#include <stdio.h>
#include <stdlib.h>

#define R 3
#define C 2

int main()
{
	system("clear");

	int *a[R],i;

	for(i = 0; i < R; i++)
	{
		printf("the value @ address %p: %p\n", (a+i), *(a+i));
	}

	for (i = 0; i <R; i++)
	{
		*(a+i) = malloc(3 * sizeof(int));
		printf("the value @address %p : %p\n", (a+i), *(a+i));
	}

	for (i = 0; i <R; i++)
	{
		*(a[0]+i) = 10 * (i+1);
		printf("the value @address %p : %d\n", (a[0]+i), *(a[0]+i));
	}



}

