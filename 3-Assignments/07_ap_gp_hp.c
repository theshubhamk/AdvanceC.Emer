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
		printf("A.P:\t");
		ap=a;
		for (r = 1;r <= n;r++)
		{
			printf("%0.1f\t", ap);
			ap = ap + d;
		}
		printf("\n");
		//logic for G.P
		printf("G.P:\t");
		gp=a;
		for (r = 1;r <= n;r++)
		{
			printf("%0.2f\t", gp);
			gp = gp * d;
		}
		printf("\n");
		//logic for H.P
		printf("H.P:\t");
		hp=a;
		for (r = 1;r <= n;r++)
		{
			zp=(1 / hp);
			printf("%0.2f\t", zp);
			hp = hp + d;

		}
		printf("\n");
		//prompt user for continuation
		printf("do you wish to continue? [Yy] [Nn]\n");

		//read user response
		scanf("\n%c", &opt);

	}while (opt == 'Y' || opt =='y');
	return 0;
}

