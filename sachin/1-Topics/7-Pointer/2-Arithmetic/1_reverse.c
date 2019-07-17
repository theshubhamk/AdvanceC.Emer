#include <stdio.h>
#include <stdlib.h>

//function declaration
void populate(int *, int);
void reverse(int *, int);
void print(int *, int);

int main()
{
	//declare the variable
	int n;

	//prompt + read the value
	printf("Enter the array size: ");
	scanf("\n%d", &n);

	//Declare the array
	int a[n];

	//call populate
	populate(a, n);

	//call reverse
	reverse(a, n);

	//call print
	print(a, n);

}

//function defination of populate
void populate(int *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", p++);
	}
}

void reverse(int *p, int n)
{
	int *q = p + n - 1;
	int temp;
	while(p <= q)
	{
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}
}

void print(int *p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", *p++);
	}
}
