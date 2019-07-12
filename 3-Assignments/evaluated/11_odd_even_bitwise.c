/*		TITLE: check if num is odd or even using bitwise operator 
		AUTHOR: Shubham Kumar Singh
		DATE: Fri Jun  7 12:34:05 IST 2019
		DESCRIPTION: Input: A number from user.
			     Output: Print whether the number is even or odd.
*/




#include <stdio.h>
#include <stdlib.h>

int main()
{

	//clear screen
	system("clear");

	//declare vars
	unsigned char num, result, bit, mask;

	//prompt user
	printf("enter the number\n");

	//read user
	scanf("%hhX", &num);
	
	//logic
	mask = 0x01;
	bit = (num & mask);
	//compare the last bit.If its 0 then even else odd.
	if (bit == 1)
	{
		printf("The number is odd\n");
	}
	else
	{
		printf("The number is even\n");
	}	
}


