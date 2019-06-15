#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear the scr
	system("clear");

	//declare vars
	int i, sum=0 , n;

	//prompt user for input
	printf("enter the value of n\n");

	//read user input
	scanf("%d", &n);

	//logic using for loop
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum is %d" , sum);
	return 0;
}
