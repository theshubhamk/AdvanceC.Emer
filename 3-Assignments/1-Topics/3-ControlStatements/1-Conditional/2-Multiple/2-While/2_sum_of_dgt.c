#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear the scrn
	system("clear");

	//declare the vars
	int sum=0;
	int num;

	//prompt user 
	printf("enter a number\n");
	
	//read user
	scanf("%d", &num);

	while (num)
	{
		sum = sum + ( num % 10);
		num = num / 10;
	}
	printf("sum is %d", sum);
	return 0;
}
