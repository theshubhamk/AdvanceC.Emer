/*
1. Syntax:
	
		if (condition)
		{
			//body
		}
		//Statements
2.		
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Clear the output screen
	system("clear");

	//Declare all the variables here
	int num;

	//Prompt the user to enter the number
	printf("Enter the number: ");

	//Read the number + store the number in num variable
	scanf("%d", &num);

	//Logic
#if 0
	//if (num % 2 == 0)
	if (num % 2)
	{
		printf("%d: EVEN\n", num);
	}
	else
	{
		printf("%d: ODD\n", num);
	}
#endif            
	if (num % 2)
	{
		printf("%d: ODD\n", num);
	}
	else
	{
		printf("%d: EVEN\n", num);
	}

	return 0;
}










