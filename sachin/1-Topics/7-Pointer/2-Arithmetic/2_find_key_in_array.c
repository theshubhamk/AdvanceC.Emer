#include <stdio.h>
#include <stdlib.h>

//function declaration
void populate(int *, int);
int key_find(int *, int, int);
void print(int *, int);

int main()
{
	//declare the variable
	int n, key;

	//prompt + read the value
	printf("Enter the array size: ");
	scanf("\n%d", &n);

	//Declare the array
	int a[n];

	//call populate
	populate(a, n);

	//call print
	print(a, n);

	//prompt + read the array
	printf("\nEnter the key: ");
	scanf("%d", &key);
	
	//call find key
	key_find(a, n, key) == 1 ? printf("key found") : printf("key not found");

}

//function defination of populate
void populate(int *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", p++);
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

int key_find(int *p, int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (*p++ == key)
		{
			return 1;
		}
		else
		{
			continue;
		}

	}
}
