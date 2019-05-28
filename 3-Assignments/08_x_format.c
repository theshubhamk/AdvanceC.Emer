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
		if ( n % 2 == 0)
		{
			for ( line = 1;line <= n;line++)
			{
				for ( i = 1;i <= n;i++)
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
				printf("\n");
			}
		}
		else
		{
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
		}
		//prompt user to continue
		printf("Do you want to continue? [Y/y] [N/n]\n");

		//read user option
		scanf("\n%c", &opt);
	}while(opt == 'Y' || opt == 'y');

}

