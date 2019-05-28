#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clr scr
	system("clear");

	//declare vars
	int rev=0, num, n; 

	//prompt user
	printf("enter a number\n");

	//read
	scanf("%d" , &n);

	num = n;
	do
	{
		rev=(rev * 10) + (num % 10);
		num = (num / 10);
	}while (num > 0);
	printf("reverse is %d", rev);
	return 0;

}
