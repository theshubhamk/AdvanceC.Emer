#include <stdio.h>

int main()
{
	//Declare variables here
	char ch;
	int flag = 0;

	//Prompt the user to enter the input
	printf("Enter the character: ");

	//Read the character
	scanf("%c", &ch);

	//Handle the error + Put the core logic
	if (ch >= 'A' && ch <= 'Z')
	{
		flag = 1;
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		flag = 1;
		ch = ch - 32;
	}

	//if (flag == 1)
	if (flag)
	{
		//Check for vowel
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
			printf("%c: VOWEL\n", ch);
		}
		else
		{
			printf("%c: Not Vowel\n", ch);
		}
	}
}

