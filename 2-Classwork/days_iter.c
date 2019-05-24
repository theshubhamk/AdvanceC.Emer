#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("clear");
	
	int n;
	int iter;
	
	printf("enter the day 1. sun   2. mon 3. tue 4. wed 5. thu 6. fri 7. sat ");
	scanf("%d", &n);
	printf("enter no. of days");
	scanf("%d", &days);
	
	int p=( days % 7 );
	int iter=n+p;

	switch (iter)
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
	return 0;
}
