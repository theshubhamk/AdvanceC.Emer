#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Declare 'n'
	int n;      //this is called dynamic declarion as we dont know the size.	
	int i, j, temp, key, flag = 0;
	//prompt + read the 'n' value
	printf("Enter the 'n' : ");
	scanf("%d" , &n);
	
	//prompt+read key
	printf("Enter the key: ");
	scanf("%d", &key);
	
	//declare the array
	int a[n];

	//Populate an array
	printf("Enter %d items: ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	//logic
	for (i = 0;i <= n ;i++)
	{
		if ( a[i] == key )
		{
			printf("Key found at index %d" ,i);
			flag = 1;
			break;
		}

	}

	if ( flag == 0 )
	{
		printf("key not found \n");
	}
	putchar('\n');

	

}
