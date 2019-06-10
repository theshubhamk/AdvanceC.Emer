#include <stdio.h>
#include <stdlib.h>

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

//	for(m=0;m<=num;m++)
//	{
//		printf("%d\n", arr[m]);
//	}


//	for (j = 2;j <= 20;j++)
//	{	
/*		if(arr[j] == 0)
		{
			continue;
		}
		else
		{
			printf("%d\n", arr[j]);
		}

*/
		for(i = 2;i <= num;i++)
		{
			if((arr[i+1] / arr[i]) == 0)
			{
				arr[i+1] = 0;
			}
		}


//	}

	for(i=0;i<=num;i++)
	{
		printf("%d\n", arr[i]);
	}

}

