/*		TITLE: Print +ve and -ve fibonacci using functions
		AUTHOR: Shubham Kumar Singh
		DATE: Fri Jun  14 12:17:21 IST 2019
		DESCRIPTION: Input: Read num.
			     Output: print fibonacci.
*/
#include <stdio.h>
#include <stdlib.h>

int f(int);
int rf(int);

int main()
{
	//clr scr
	system("clear");

	//declare vars
	int n, i = 0, c, sel,m;	

	//prompt + read user
	printf("enter the number\n");
	scanf("%d", &m);
	
	//read option	
	printf("1. +ve fibonacci 2. -ve fibonacci\n");
	scanf("%d", &sel);

	//check for 0
	if(m == 0)
	{
		printf("0\n");
		exit(0);
	}
	
	//select option
	switch (sel)
	{	
		//+ve case
		case 1:
			n = m + 2;
			printf("Fibonacci series terms are:\n");
			for (c = 1; c <= n; c++)
			{
				if(f(i) <= n)
				{
					printf("%d\n", f(i));
				}
				i++;
			}
			break;
		//-ve case
		case 2:	
			n = m - 2;
			printf("Fibonacci series terms are:\n");
			for (c = 1; c <= -n; c++)
			{
				if(rf(i) <= -n && rf(i) >= n)
				{
					printf("%d\t", rf(i));
				}
				i++;
			}
			break;
		default:
			printf("Enter the valid option\n");
	}
return 0;
}
//for +ve fibonacci
int f(int n)
{
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	else
		return (f(n-1) + f(n-2));
}
//for -ve fibonacci
int rf(int n)
{
	if (n == 0)
		return 0;
	if(n == 1)
		return 1;
	else
		return (rf(n-2) - rf(n-1));
}
