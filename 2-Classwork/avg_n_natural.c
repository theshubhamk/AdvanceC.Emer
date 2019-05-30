#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear screen 
	system("clear");

	//declare vars
	int sum=0,n,i;

	//prompt user
	printf("enter the value of n\n");

	//read user
	scanf("%d", &n);

	//logic
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	float avg = (float)sum/n;
	printf("the avg is %0.2f: \n", avg);
	return 0;
}




