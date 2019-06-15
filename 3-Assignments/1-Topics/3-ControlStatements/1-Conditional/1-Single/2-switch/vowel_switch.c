#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear scr
	system("clear");

	//declare vars
	char ch,sh;

	//prompt user for input
	printf("Enter an alphabet\n");

	//read user input
	scanf("%c", &ch);

	//core logic
	if(65 <= ch && ch <= 90)
	{
		sh = ch;
	}
	else
	{
		sh = ch - 32;
	}

	switch (sh)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("It's Vowel\n");
			break;

		default:
			printf("its is not a vowel\n");
	}
	return 0;
}
