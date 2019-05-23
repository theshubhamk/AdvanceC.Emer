#include<stdio.h>
#include<stdlib.h>


int main()
{
	//clear the output screen
	system("clear");
	
	//Declare all variables
	char n;
	
	//prompt user for input
	printf("ENTER AN ALPHABET:");

	//read user input
	scanf("%c", &n);

	//logic
	if (65 <= n && n <= 90)
	{
		printf(" %c is in LARGE caps ", n);
	}
	else if (97 <= n && n <= 122)
	{	
		printf(" %c is in small caps", n);
	}
	else
	{
		printf("KINDLY ENTER ONLY ALPHABETS");
	}
	return 0;
}

