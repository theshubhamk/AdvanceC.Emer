#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear screen
	system("clear");

	//declare vars
	int n ,a=0 ,b=1 ,c=0,p ,flag=0;
	
	//prompt user
	printf("enter the value of n\n");

	//read user
	scanf("%d", &n);

	//logic
	if (n < 0)
	{
		p = n * -1;
		while (c <= p && c >= n)
		{
			if (b<1)
			{
				c=a;
			}
			else
			{
				c = a - b;
			}

			printf("[%d]\n", c);
			a = b;
			b = c;
		}
	}
	else
	{
		while (c <= n)
		{
			if (a<1)
			{
				c=a;
			}
			else	
			{
				c = a + b;
			}
			printf("[%d]\n", c);
			a = b;
			b = c;
		}
	}
	return 0;
}

