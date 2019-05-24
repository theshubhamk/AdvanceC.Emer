#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("clear");
	
	int n;
	int iter;
	int days;

	printf("enter the day 1. sun   2. mon 3. tue 4. wed 5. thu 6. fri 7. sat ");
	scanf("%d", &n);
	printf("enter no. of days");
	scanf("%d", &days);
	int p=( n % 7 );
	int sum=n+days;
// int j=p+1;
/*
	if ( 1 <= sum && sum <= 7 ) 
	{
		switch (sum)
		{
			case 1: 
					printf("sun");
					break;
			case 2:
					printf("mon");
					break;
			case 3:
					printf("tue");
					break;	
			case 4:
					printf("wed");
					break;	
			case 5:
					printf("thu");
					break;
			case 6:
					printf("fri");
					break;
			case 7:
					printf("sat");
					break;
			default:		
					break;
		}
		exit(1);
	}

	if ( p == 0 )
	{
		switch (n)
		{
			case 1: 
					printf("sun");
					break;
			case 2:
					printf("mon");
					break;
			case 3:
					printf("tue");
					break;	
			case 4:
					printf("wed");
					break;	
			case 5:
					printf("thu");
					break;
			case 6:
					printf("fri");
					break;
			case 7:
					printf("sat");
					break;
			default:		
					break;
		}
	}
	else
	{
		
*/	//	iter=days+(p-1);

			
		switch (l)
		{
			case 1: 
					printf("sun");
					break;
			case 2:
					printf("mon");
					break;
			case 3:
					printf("tue");
					break;	
			case 4:
					printf("wed");
					break;	
			case 5:
					printf("thu");
					break;
			case 6:
					printf("fri");
					break;
			case 7:
					printf("sat");
					break;
			default:		
					break;
		}

	}



	return 0;
}

