/*		TITLE: Check if a number is perfect or not. 
		AUTHOR: Shubham Kumar Singh
		DATE: Wed May 29 13:07:02 IST 2019
		DESCRIPTION: Input: A number from user.
					 Output: Print whether the number is perfect or not.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clr scr
	system("clear");

	//declare vars
	char opt;
	do
	{
		int sum = 0, rem = 0, i, j, num;
		//prompt user
		printf("Enter a number\n");

		//read user
		scanf("%d", &num);

		//logic
		//we check upto half of the entered number for the factors.
		//if a number when divided leaves zero remainder that is a factor.
		for (j = 1;j <= (num / 2);j++)
		{
			rem = num % j;
			//if the remainder is zero it means that j is a factor 
			if (rem == 0)
			{
				//add all the factors
				sum = sum + j;
			}
		}
		//if the sum of all the factors is equal to the number itself then print its a perfect number.
		if ( sum == num )
		{
			printf("Its a perfect number\n");
		}
		else
		{
			printf("Its not perfect number\n");
		}
		//prompt user for continuation
		printf("do you want to continue? [Yy] [Nn]");
		
		//read user response
		scanf("\n%c", &opt);

	}while (opt == 'Y' || opt == 'y');
	return 0;
}
