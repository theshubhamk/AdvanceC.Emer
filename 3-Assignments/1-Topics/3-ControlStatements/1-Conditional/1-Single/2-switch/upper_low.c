#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clr scrn
	system("clear");

	//declare vars
	char ch;

	//prompt user for input
	printf("Enter an alphabet\n");

	//read user input
	scanf("%c", &ch);

	//core logic
	switch (ch)
	{
		case 'A'...'Z':
						printf("ITS AN UPPER CASE ALPHABET");
						break;
		case 'a'...'z':
						printf("its a lower case alphabet");
						break;
		default:
				printf("invalid input .. try again...");
	}
	return 0;


}

