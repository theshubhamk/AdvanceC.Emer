/*		TITLE: print hello in X pattern
		AUTHOR: Shubham Kumar Singh
		DATE: Wed May 29 15:50:58 IST 2019
		DESCRIPTION: Input: the start day and the no. of days
			     Output: Print the resulting day.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear scr
	system("clear");

	//declare variables
	int i,line,j,n;
	char opt;
	do
	{
		//Prompt user for input
		printf("enter a value\n");

		//read user input
		scanf("%d", &n);
		
		//core logic
		for ( line = 1;line <= n;line++)
		{
			for ( i = 1;i <= n;i++)
			{
				if ((((n+1)/2)) == line && line  == i && (i+line)==(n+1)) 
				{
					printf("hello");
				}
				if ((i>((n+1)/2)))
				{
					if ((i + line) == (n + 1)  || (i == line)) 	
					{	
						printf(" hello");
					}
					else
					{
						printf(" ");
					}
				}
				else
				{
					if ((i + line) == (n + 1)  || (i == line)) 	
					{	
						printf("hello");
					}
					else
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
		//prompt user to continue
		printf("Do you want to continue? [Y/y] [N/n]\n");

		//read user option
		scanf("\n%c", &opt);
	}while (opt == 'Y' || opt == 'y');
	return 0;
}

