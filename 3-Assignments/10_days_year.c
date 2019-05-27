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
	//clear the output screen
	system("clear");
	
	//declare variables
	int n, iter,days;
	
	//prompt user for day input
	printf("enter the day 1. sun   2. mon 3. tue 4. wed 5. thu 6. fri 7. sat : ");
	
	//read user input
	scanf("%d", &n);
	
	//prompt user for no. of days input
	printf("enter no. of days: ");
	
	//read user input
	scanf("%d", &days);
	
	//core logic
	//the sum of 1st day and no. of days
	int sum = n + days;

	//get the reminder with respect to repeating value 7.
	int rem1=(sum % 7);
	int rem2=(days % 7);
	
	//if the remainder is 0 i.e the sum is multiple of 7 then do remainder plus 1st day else just go to the rem of no.of days and 7.
	if (rem1 == 0)
		iter = rem2 + n - 1;
	else
		iter = rem1 - 1;

	//Switch to the required day and print it.
	switch (iter)
	{
		case 0:
			printf("sat");
			break;

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
