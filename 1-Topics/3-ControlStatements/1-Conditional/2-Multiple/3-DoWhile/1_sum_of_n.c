#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear the output scr
	system("clear");

	//declare vars
	int i=0, sum=0, n;

	//prompt for inp
	printf("enter the value of n\n");

	//read user
	scanf("%d", &n);
	
	do
	{
		sum=sum+i;
		i++;
	}
	while (i <= n);
	printf("the sum is %d", sum);
	return 0;
	
}
