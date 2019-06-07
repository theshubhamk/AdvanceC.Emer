/*		TITLE: Print bits of a given no. with its sign.
		AUTHOR: Shubham Kumar Singh
		DATE: Fri Jun  6 12:40:05 IST 2019
		DESCRIPTION: Input: A number from user.
			     Output: Print the bits with sign.
*/




#include <stdio.h>
#include <stdlib.h>

int main()
{

	//clear screen
	system("clear");

	//declare vars
	unsigned mask, num, result, num1, result1;
	int i;
	//prompt user
	printf("enter the number\n");

	//read user
	scanf("%d", &num);
	num1 = -num;
	//logic
	printf("%d : \n", num);
	mask = 1 << 31;
	for (i = 0;i < 32;i++)
	{
		if (num & mask)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
		mask = mask >> 1;
	}
	printf("\n");
	//for -ve number
	printf("%d : \n", num1);
	mask = 1 << 31;
	for (i = 0;i < 32;i++)
	{
		if (num1 & mask)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
		mask = mask >> 1;
	}
	printf("\n");
}


