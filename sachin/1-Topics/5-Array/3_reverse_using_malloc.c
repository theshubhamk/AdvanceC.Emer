#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declare 'n'
	int n, i, j, temp;

	//read 'n' value + store in variable
	printf("Enter 'n': ");
	scanf("%d", &n);
	//declare an array
	//realloc memory
	int *a = malloc(n * sizeof(int));

	void *temp1 = realloc(a, (n + 2) * sizeof(int));
	if (temp1 == NULL)
	{
		printf("realloc failed\n");
		return 0;
	}
	a= temp1;
	//populate the array
	printf("\nEnter %d items:", n+2);
	for (i = 0; i < n+ 2; i++)
	{
		scanf("\t%d", &a[i]);
	}


	//logic
	for (i = 0, j = n+2 - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	//print the result
	for (i = 0; i < n+2; i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');

}
