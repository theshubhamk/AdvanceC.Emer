/*              TITLE: find the AP GP HP
                AUTHOR: Shubham Kumar Singh
                DATE: Wed May 30 12:30:03 IST 2019
                DESCRIPTION: Input: start term, common ratio/diff, no.of terms
                             Output: Print all the three AP GP HP.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear screen
	system("clear");
	char opt;
	do
	{
		//declare vars'
		int n;
		float a, ap, gp, hp, zp, d, r;

		//prompt user for start term
		printf("Enter the start term\n");

		//read user
		scanf("%f", &a);

		//prompt user for common diff/ratio
		printf("enter the common ratio/diff\n");
		
		//read user
		scanf("%f", &d);

		//prompt user for number of terms
		printf("Enter the no. of terms\n");

		//read user
		scanf("%d", &n);

		//logic for A.P 
		printf("A.P\t\t G.P\t\t H.P\t\t\n");
		ap=a;
		gp=a;
		hp=a;

		for (r = 1;r <= n;r++)
		{
			printf("%0.1f\t\t %0.2f\t\t %0.2f\t\t\n", ap , gp ,hp);
			ap = ap + d;	
			gp = gp * d;	
			hp=(1 / ap);
		}
		printf("\n");
		//prompt user for continuation
		printf("do you wish to continue? [Yy] [Nn]\n");

		//read user response
		scanf("\n%c", &opt);

	}while (opt == 'Y' || opt =='y');
	return 0;
}

