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
	int a[n];

	//populate the array
	printf("\nEnter %d items:", n);
	for (i = 0; i < n; i++)
	{
		scanf("\t%d", &a[i]);
	}
	//logic
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	//enter the key
	printf("\nEnter the key");
	//print the result
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');

}
