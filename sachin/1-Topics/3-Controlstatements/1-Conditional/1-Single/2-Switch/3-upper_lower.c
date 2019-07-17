#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear the screen
	system("clear");

	//declarartion and variable to store character enter
	char ch;

	int flag ;

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
		flag = 0;
		
	}
	else
	{
		printf("Enter the valid input\n try again\n");
		return 0;
	}
		
		//logical part
		switch (flag)
		{	
			case 1:
					printf("%c is upper case", ch);
					break;
			default:
					printf("%c is lower case", ch);
					
			
		}
	
}
