/*		TITLE: Converts to IEEE binary format.
		AUTHOR: Shubham Kumar Singh
		DATE:Sun Jul  6 14:11:08 IST 2019
		DESCRIPTION: Input: Read a float number from user.
			     Output: print the IEEE binary format.
*/

#include <stdio.h>
#include <stdlib.h>

//Declare functions
void f_binary(int *);
void d_binary(long int *);

int main()
{
	//clear sceen
	system("clear");

	//Declare vars
	int op;
	float n;
	double n1;
	//prompt + read user
	printf("Enter the Choice\n1.Float\n2.Double\n");
	scanf("%d", &op);
	//select the option
	switch (op)
	{
		case 1 :
			//Prompt + Read the input 
			printf("Enter the value:");
			scanf("%f", &n);

			//Calling a function
			f_binary((int *)&n);
			break;

		case 2 :
			//Prompt + Read the input 
			printf("Enter the value:");
			scanf("%lf", (double *)&n1);

			//calling a function
			d_binary((long int *)&n1);
			break;
		default:
			printf("Enter a valid option\n");
	}
	getchar();
	return 0;
}

//Function Defination for float_binary
void f_binary(int *num)
{
	int count = 0;

	//leftshift by 3 times get 32
	printf("Sign\tExponent\tMantissa\n");

	unsigned mask = 1 << (sizeof(float)  << 3) - 1;
	for ( ; mask; mask >>= 1)
	{
		*num & mask ? putchar ('1') : putchar ('0');
		if (count == 0 || count == 8)
		{
			printf("\t");
		}

		count++;
	}
	printf("\n");
}

//Function Defination for double_binary
void d_binary(long int *num)
{
	int count = 0;

	//leftshift by 3 times get 64
	printf("Sign\tExponent\tMantissa\n");

	unsigned long mask = 1UL << (sizeof(double) << 3) - 1;

	for ( ; mask; mask >>= 1)
	{
		*num & mask ? putchar ('1') : putchar ('0');
		if (count == 0 || count == 11)
		{
			printf("\t");
		}
		count++;
	}
	printf("\n");
}
