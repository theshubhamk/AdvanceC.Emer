#include <stdio.h>
#defined ODD 1
#defined EVEN 0

//declare the function
int is_even_odd(int);

//define the main function
int main()
{
	int num;
	//print +read the input
	printf("Enter the number: ");
	scanf("%d", &num);
	//print the result
	switch (is_even_odd(num))
	{
		case 0 :
			printf(" %d is even", num);
			break;
		default :
			printf(" %d is odd", num);
			
	}
}

