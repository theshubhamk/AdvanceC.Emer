#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear scr
	system("clear");

	//declare variables
	int i ,line ,j ,n ;
	char opt;

	//prompt
	printf("Enter the value\n");

	//read
	scanf("%d", &n);

	//logic
	int k = (n * 2) - 1;
	for (i = 1;i <= k;i++)
	{
		for (j = 1;j <= k;j++)
		{
			if((((i == n && j >= 1 && j <= k))) || (j == n && i >= 1 && i <= k) || ((i-j)==(n-1)) || ((j-i)==(n-1)) || ((i+j)==(n+1)) || ((i+j)==(n+1)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
	//		if(((i-j)==(n-1)) || ((j-i)==(n-1)))
		//	{
		//		printf("*");
		//	}

		}
		printf("\n");
	}
}

