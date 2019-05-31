#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear screen
	system("clear");
	
	//declare variables
	int i, j, k, a, o, l, m, n;
	
	//prompt user
	printf("enter the values of n\n");
	
	//read user
	scanf("%d", &a);
	
	//logic
	o = a;
	for (i = 1;i <= a;i++)
	{
		for (j = ((a + 1) - i) ;j > 0;j--)
		{
			printf(" ");
		}
		for (k = 0; k < ((2 * i) - 1);k++)
		{
			printf("*");
		}
		printf("\n");	
	}

	for (l = 1; l <= a ;l++)
	{
		for (m = 0;m <= l;m++)
		{
			printf(" ");
		}
		for (n = 0;n < ((2 * (o - 1)) - 1);n++)
		{
			printf("*");
		}
		o -= 1;
		printf("\n");
	}


}
