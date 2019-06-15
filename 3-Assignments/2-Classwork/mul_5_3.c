


#include<stdio.h>
#include<stdlib.h>

int main()
{
	//clear the output screen
	system("clear");

	//declare the variables 
	int n;

	//prompt user for the input
	printf("ENTER A NUMBER:  ");

	//read user input
	scanf("%d", &n);

	//logic
	if ( n % 5 == 0 && n % 3 == 0 )
	{
		printf(" %d is a multiple of both 5 and 3 ", n);
		exit(1);
	}
	printf(" %d is a not multiple of both 5 and 3 ", n);
	return 0;
}

