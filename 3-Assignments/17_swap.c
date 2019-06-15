/*		TITLE:swap two nos without third variable using pointers.
		AUTHOR: Shubham Kumar Singh
		DATE: Fri Jun  15 11:57:41 IST 2019
		DESCRIPTION: Input: two number from user.
			     Output: Print the swapped number.
*/
#include <stdio.h>
#include <stdlib.h>

void swapp(int *, int *);

int main()
{

	//clear screen
	system("clear");
	
	char op;
	do
	{	
		//declare vars
		int num1, num2;

		//prompt + read user
		printf("Enter two nos\n");
		scanf("%d\n%d", &num1, &num2);
		printf("The first number is %d and 2nd number is %d\n", num1, num2);	
		swapp(&num1, &num2);
		printf("after swap The first number is %d and 2nd number is %d\n", num1, num2);	
		//ask user for loop
		printf("Do you want to cont\n");
		scanf("\n%c", &op);
	}while(op == 'y' | op == 'Y');
return 0;
}

void swapp(int *num1, int *num2)
{
	//we use an XOR bitwise operation to swap as XOR gives 1 for the same bits and zero for different bits
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}


