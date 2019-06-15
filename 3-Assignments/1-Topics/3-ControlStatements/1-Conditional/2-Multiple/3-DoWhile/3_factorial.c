#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clr scr
	system("clear");

	//declare vars
	long int num, n;
	long int fac;
	char opt;
	do
	{
		fac = 1;
		//prompt
		printf("enter a number:\n");

		//read
		scanf("%ld", &n);
		
		//logic
		for(num = n;num > 1;num--)
		{
			fac = (fac * num);
		}
		printf("the factorial is %ld \n", fac);
		
		//prompt user for confirmation
		printf("Do you want to try again? press Y/y or N/n :  ");

		//read user response
		scanf("\n %c", &opt);

	}while ( opt == 'Y' || opt == 'y' );
	return 0;
}
