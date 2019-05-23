


#include<stdio.h>
#include<stdlib.h>

int main()
{
	//clear the output screen
	system("clear");

	//declare all the variables
	int n;

	//prompt user to enter the value
	printf("Enter a number:");

	//read the user input
	scanf("%d", &n);

	//logic
	{
		if (n % 5)
		{
			printf(" %d is not a multiple of 5\n ", n);
			exit(1);
		}
		printf(" %d is a multiple of 5\n ", n);
	}
	return 0;
}


