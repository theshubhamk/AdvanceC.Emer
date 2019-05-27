#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear the op screen
	system("clear");

	//decalre vars
	float num1,num2,sum;
	char opr;

	//prompt user for input
	printf("Enter 1st num\n");

	//read user inp
	scanf("%f" ,&num1);

	//prompt for 2nd inp
	printf("enter the 2nd num\n");

	//read 2nd num
	scanf("%f" ,&num2);

	//prompt for operator
	printf("enter the operator\n");
	
	//since the input buffer still has the \n from previous scanf. we need to clear the input buffer using getchar().
	//the get getchar() will read the \n and will make the buffer empty for char to take new input form user.
	getchar();

	//read opr
	scanf("%c" ,&opr);

	//core logic
	switch (opr)
	{

		case '+' :
				sum=num1+num2;
				break;
		
		case '-' :
				if ( num1>num2 )
					sum=num1-num2;
				else
					sum=num2-num1;
				break;
	
		case '*':
				sum=num1*num2;
				break;
		case '/':
				sum=num1/num2;
				break;
		default:
				printf("invalid input try again");
				break;
	}

	printf("result is %f ", sum);
	return 0;
}

