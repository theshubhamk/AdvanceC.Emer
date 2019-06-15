#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear scr
	system("clear");
	
	//declare vars
	int i,j,col,row,x,count;
	
	//prompt + read user
	printf("Enter the no.of col\n");
	scanf("%d", &col);
	
	
	//prompt + read user
	printf("enter the num 0-9\n");
	scanf("%d", &x);

	//validations		
	if ( x == 0 || x == 1 || x == 3 || x == 5 || x == 7 || x == 9)
	{
		printf("Enter the even number between 0 to 9\n");
		exit(1);	
	}
	if( x < 0 || x > 9)
	{
		printf("Enter the even number between 0 to 9\n");
		exit(1);
	}

	//logic
	row = (2 * col) + 1;
	int half = row / 2;
	
	switch (x)
	{
		case 2 :
		
			count = 0;
			for (i = 1;i <= row; i++)
			{
				for (j = 1;j <= col;j++)
				{
					if (i == 1 || ((1 <= i) && (i <= half) && (j == col)) || ((half < i) && (i <= row) && (j == 1)) || i == row || i == half+1 )
					{
						printf("*");
						count++;
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
			break;
		
		case 4 :
			
			count = 0;
			for (i = 1;i <= row; i++)
			{
				for (j = 1;j <= col;j++)
				{
					if ( ((1 <= i) && (i <= half) && (j == 1)) || (j == col) || (i ==  half+1))
					{
						printf("*");
						count++;
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
			break;
		
		case 6 :

			count = 0;
			for (i = 1;i <= row; i++)
			{
				for (j = 1;j <= col;j++)
				{
					if ( ((j == col) && (half < i) && (i <= row)) || (i ==  half+1) || (i == 1) || (i == row) || (j == 1))
					{
						printf("*");
						count++;
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
			break;

		case 8 :

			count = 0;
			for (i = 1;i <= row; i++)
			{
				for (j = 1;j <= col;j++)
				{
					if (((j == col) || (i ==  half+1) || (i == 1) || (i == row) || (j == 1)))
					{
						printf("*");
						count++;
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
			break;

	




	}
		int avg, sum;
		sum = col + row;
		avg = (float)count / sum;
	if ( x == 2 || x == 4 || x == 6 || x == 8 )
	{
		printf("avg is %d\n", avg);
	}




}
/* */ 
