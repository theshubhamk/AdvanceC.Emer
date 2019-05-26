/*		TITLE: Given a no. 1-365.Find which day of the year it is.
		AUTHOR: Shubham Kumar Singh
		DATE: Fri May 24 15:20:34 IST 2019
		DESCRIPTION: Input: the start day and the no. of days
			     Output: Print the resulting day.
*/



#include<stdio.h>
#include<stdlib.h>

int main()
{
	system("clear");
	
	int n;
	int iter,days;
	
	printf("enter the day 1. sun   2. mon 3. tue 4. wed 5. thu 6. fri 7. sat : ");
	scanf("%d", &n);
	printf("enter no. of days");
	scanf("%d", &days);
	

	int sum=n+days;
	int p=( sum % 7 );
	int q=( days% 7	);
	
//	if(sum<=7)
//		iter=sum-1;
//	else
//		iter=p;

	if (p == 0)
		iter=q+n;
	else
		iter=p;


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
