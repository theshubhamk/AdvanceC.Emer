/*              TITLE: To generate Fibonacci series
                AUTHOR: Shubham Kumar Singh
                DATE: Wed May 29 14:14:03 IST 2019
                DESCRIPTION: Input: read the number (+ve or -ve)
                             Output: Print the fibonacci series.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear screen
	system("clear");
	char opt;
	do
	{
		//declare vars
		int n, a = 0 ,b = 1 ,nextTerm = 0,p;
		
		//prompt user
		printf("enter the value of n\n");

		//read user
		scanf("%d", &n);

		//logic
		//if the number is -ve then run the -ve fibonacci series or else run the positive series
		if (n < 0)
		{
			p = n * -1;
			while (nextTerm <= p && nextTerm >= n)
			{
				printf("[%d]\n", nextTerm);
				a = b;
				b = nextTerm;
				nextTerm = a - b;
			}
		}
		//+ve fibonacci series.
		else
		{
			while (nextTerm <= n)
			{
				printf("[%d]\n", nextTerm);
				a = b;
				b = nextTerm;
				nextTerm = a + b;
			}
		}
		//prompt user for continuation
		printf("do you wish to continue? [Yy] [Nn]\n");

		//read user response
		scanf("\n%c", &opt);
	}while (opt == 'Y' || opt == 'y');
	return 0;
}

