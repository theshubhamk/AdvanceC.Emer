#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear the screen
	system("clear");

	//declarartion and variable to store character enter
	char ch;

	int flag = 0;

	//prompt the user to enter the character
	printf("Enter the character: ");

	//read the number + store the value in variable ch
	scanf("%c", &ch);

	//check character is valid or not

	if (ch >= 'A' && ch <= 'Z')
	{
		flag = 1;
	}
	else if ( ch >= 'a' && ch <= 'z')
	{
		flag = 1;
		ch = ch - 32;
	}
		//logical part
	
	if (flag)
	{
		switch (ch)
		{	
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
					printf("%c is vowel", ch);
					break;
			default:
					printf("%c is not vowel", ch);
		}
	}

}
