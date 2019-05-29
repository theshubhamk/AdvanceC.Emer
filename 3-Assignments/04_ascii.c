/*              TITLE: Print all ASCII characters.
                AUTHOR: Shubham Kumar Singh
                DATE: Wed May 29 12:14:03 IST 2019
                DESCRIPTION: Input: No input
                             Output: Print all ASCII characters.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
	
{
	//clear screen
	system("clear");

	//declare variables
	int num,i;

	//core logic
	//print the table index
	printf("oct\t dec\t hex\t char\t\n");

	//run  loop to cover all the ascii values
	for(i=0;i<=127;i++)
	{
		if ( i<=32 && i>=0 || i==127)
		{
			//print non printables for the values which can't be displayed
			printf("%o\t %d\t %X\t NON PRINTABLE\t\n",i,i,i);
		}
		else
		{
			printf("%o\t %d\t %X\t %c\t\n",i,i,i,i);
		}
	}
	return 0;
}

