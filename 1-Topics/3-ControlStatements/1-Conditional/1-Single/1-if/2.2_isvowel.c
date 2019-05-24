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
		if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
		{
			printf("%c: VOWEL\n", ch);
		}
		else
		{
			printf("%c: Not Vowel\n", );
		}
	}
}


















