#include <stdio.h>
//declaration a function
#define valid 1 
#define invalid 0 
int is_valid(int);
int is_even_odd(int);

int main()
{
	int num;
	//read + store the variable
	printf("Enter the number: ");
	scanf("\n%d", &num);
	//calling a function for validation
	if (is_valid(num) == 0)
	{
		printf("enter the valid number");
		return 0;
	}
	if (is_even_odd(num))
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
	return 0;

}
//define the function
int is_valid(int num1)
{
	 if ( num1 > 100 && num1 < 999)
	{
		return valid; 
	}
	else
	{	
		return invalid;
	}
}
//define the function for even or odd
int is_even_odd(int num1)
{
	if (num1 % 2)
	{
		return valid;
	}
	else
	{
		return invalid;
	}
}


