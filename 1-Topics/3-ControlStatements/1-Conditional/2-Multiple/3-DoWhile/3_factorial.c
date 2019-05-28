#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clr scr
	system("clear");

	//declare vars
	int num,n,fact=1;

	//prompt
	printf("enter a number:\n");

	//read
	scanf("%d", &n);

	for(num=n;num>0;num--)
	{
		fact=fact*num;
	}
	printf("the factorial is %d", fact);
}
