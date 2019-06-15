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

	for (num = n;num > 0;num =(num / 10))
	{
		rev=(rev * 10) + (num % 10);
	}
	printf("reverse is %d", rev);
	return 0;

}
