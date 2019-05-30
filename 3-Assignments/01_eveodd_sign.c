/*		TITLE: Check if a number is even or odd and print its signedness
		AUTHOR: Shubham Kumar Singh
		DATE: Fri May 24 12:18:49 IST 2019
		DESCRIPTION: Input: A number from user.
					 Output: Print whether the number is even or odd and its signedness.
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear output screen
	system("clear");

	//declare vars
	int num, i, range = 1;
	
	//prompt for input
	printf("ENTER A NUMBER:    ");

	//read the input
	scanf("%d", &num);

	//range calculation loop
	for (i = 1;i <= 20;i++)
	{
		range=range*2;
	}
	//lower range to check validity
	int lower = -range;	

	//upper range to check validity
	int upper =  range;

	//sum of the number with itself
	int maxvalue = num + num;
/*
	if (lower > num && num > upper)
	{
		printf("number is out of range\n");	
	}
*/
	//check for zero.
	if (num == 0)
	{
		printf("THE NUMBER IS %d . its neither even nor odd ", num);
	}
	else
	{
		//check for error i.e within range or not
		if (lower < num && num < upper)	
		{
			//core logic
			//this line checks for even/odd. if the remainder is zero the number is even else odd 
			if ((num % 2) == 0) 
			{	
				//check for signed/unsigned. if the number added with itself is less than number then the number is signed else unsigned
				if (maxvalue < num) 
				{
					printf("number is even and signed\n");
				}
				else
				{
					printf("number is even and unsigned\n");
				}
			}
			else
			{
				if (maxvalue < num)
				{
					printf("number is odd and signed\n");
				}
				else
				{	
					printf("number is odd and unsigned\n");
				}
			}
		}
		else
		{
				printf("number is out of range\n");
		}
	}
	return 0;
}
