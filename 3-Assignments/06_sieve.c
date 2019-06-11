#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//clear screen
	system("clear");

	//decalre vars
	int num, i, j, k, l, m;
	
	//prompt + read user
	printf("Enter a number\n");
	scanf("%d", &num);

	int arr[num+1];

	for (i = 0;i <= num;i++)
	{
		arr[i] = i;
	}
	arr[0] = arr[1] = 0;
	for (j = 2;j <= sqrt(num);j++)
	{   
		if(arr[j] != 0)
		{
			for(i = j;i <= num;i++)	
			{
				int op;
				op = arr[i+1] % arr[j];
				if(op == 0)
				{
					arr[i+1] = 0;
				}
			}
		}


	}

	for(i=0;i<=num;i++)
	{
		if(arr[i] != 0)
		{
			printf("%d\n", arr[i]);
		}
	}

}

