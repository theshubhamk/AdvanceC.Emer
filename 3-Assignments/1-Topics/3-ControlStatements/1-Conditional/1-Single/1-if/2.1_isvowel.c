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
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		flag = 1;
	}

	//if (flag == 1)
	if (flag)
	{
		//Check for vowel
		if (ch == 'A' || ch == 'a')
		{
			printf("%c: VOWEL\n", ch);
		}
		else if (ch == 'E' || ch == 'e')
		{
			printf("%c: VOWEL\n");
		}
		else if (ch == 'I' || ch == 'i')
		{
			printf("%c: VOWEL\n");
		}
		else if (ch == 'O' || ch == 'o')
		{
			printf("%c: VOWEL\n");
		}
		else if (ch == 'U' || ch == 'u')
		{
			printf("%c: VOWEL\n");
		}
		else
		{
			printf("%c: Not Vowel\n", );
		}
	}
}


















