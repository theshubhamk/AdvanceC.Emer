#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Declare 'n'
	int n;      //this is called dynamic declarion as we dont know the size.	
	int i, j, temp;
	//prompt + read the 'n' value
	printf("Enter the 'n' : ");
	scanf("%d" , &n);

	//declare the array
	int a[n];

	//Populate an array
	printf("Enter %d items: ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	//logic
	for (i = 0, j = n - 1 ;i < j;i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	//print the result
	for (i = 0;i < n;i++)
	{
		printf("%d", a[i]);
	}
	putchar('\n');

	

}
