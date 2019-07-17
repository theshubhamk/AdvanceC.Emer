#include <stdio.h>
#include <stdlib.h>
int main()
{
	//clear the output screen
	system("clear");

	int num;
	int flag=0;
    //prompt the user to enter the input
    printf("enter the number");
    
    //read the input
    scanf("%d", &num);

    if (num >=0 && num <=100)
    {
    		flag=1;
	}
    else
	{ 
		printf("enter the valid number");

	}
    
    if (flag)
	{
		if (num >= 90 )
		{
			printf("A");
		}
		else if (num >= 80 && num < 90)
		{
			printf("B");
			
		}
		else if (num >= 70 && num < 80)
		{
			printf("C");

		}
		else if (num >= 60 && num < 70 )
		{ 
			printf("D");

		}
		else if (num >=50 && num < 50)
		{
			printf("E");

		}
		else 
		{
			printf("F");
		}
		printf("\n");
	}

}
