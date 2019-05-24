#include <stdio.h>

int main()
{
	//Declare variables here
	char ch;
	int flag1 = 0;
	int flag2 = 0;

	//Prompt the user to enter the input
	printf("Enter the character: ");

	//Read the character
	scanf("%c", &ch);

	//Handle the error + Put the core logic
	if (ch >= 'A' && ch <= 'Z')
	{
		flag1 = 1;
	}
	if (ch >= 'a' && ch <= 'z')
	{
		flag2 = 1;
	}

	if (flag1 == 1 || flag2 == 1)
	{
		//Check for vowel
		if (ch == 'A' || ch == 'a')
		{
			printf("%c: VOWEL\n");
		}
		if (ch == 'E' || ch == 'e')
		{
			printf("%c: VOWEL\n");
		}
		if (ch == 'I' || ch == 'i')
		{
			printf("%c: VOWEL\n");
		}
		if (ch == 'O' || ch == 'o')
		{
			printf("%c: VOWEL\n");
		}
		if (ch == 'U' || ch == 'u')
		{
			printf("%c: VOWEL\n");
		}
	}
}


















