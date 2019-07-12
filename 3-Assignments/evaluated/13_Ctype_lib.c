/*		TITLE: IMPLEMENT OWN c library. 
		AUTHOR: Shubham Kumar Singh
		DATE: Thu june 12 13:07:02 IST 2019
		DESCRIPTION: Input: A number from user.
			     Output:prints the c lib outputs.
*/
#include <stdio.h>
#include <stdlib.h>

int is_alnum(int);
int is_alpha(int);
int is_ascii(int);
int is_blank(int);

int main()
{
	int resp;
	do
	{
		//clear scr
		system("clear");
		
		//decare vars
		char ch;
		int op;

		//prompt + read user
		printf("Enter a char\n");
		scanf("%c", &ch);
		
		printf("Enter the choice 1. is_alnum 2. is_alpha 3. is_ascii 4. is_blank\n");
		scanf("%d", &op);
		
		switch (op)
		{
			case 1: 
				if(is_alnum(ch) == 0)
				{
					printf("number\n");
				}
				else if(is_alnum(ch) == 1)
				{
					printf("alphabet\n");
				}
				else
				{
					printf("Invalid character\n");
				}
				break;
			case 2:
				if(is_alpha(ch) == 21)
				{
					printf("upper case\n");
				}
				else if(is_alpha(ch) == 22)
				{
					printf("lower case\n");
				}
				else
				{
					printf("Invalid character\n");
				}
				break;
			case 3:
				if(is_ascii(ch) == 15)
				{
					printf("ASCII\n");
				}
				else
				{
					printf("not ascii\n");
				}
				break;
			case 4:
				if(is_blank(ch) == 10)
				{
					printf("blank character eneterd\n");
				}
				else
				{
					printf("Not a blank ch\n");
				}
				break;
			default:
				printf("Enter correct option\n");
		}
		printf("do you want to cont? 1.Y 2.N\n");
		scanf("%d", &resp);
		getchar();
	}while (resp == 1);
}

int is_alnum(int ch)
{
	if (48 <= ch  & ch <= 57)
	{
		return 0;
	}
	else if ((ch <= 90 && ch >= 65) || (97 <= ch && ch <= 122))
	{
		return 1;
	}
}

int is_alpha(int ch)
{
	if (ch <= 90 && ch >= 65)
	{
		return 21;
	}
	else if(97 <= ch && ch <= 122)
	{
		return 22;
	}
}

int is_ascii(int ch)
{
	if(0 <= ch && ch <= 127)
	{
		return 15;
	}
}

int is_blank(int ch)
{
	if(ch == 32 || ch == 9)
	{
		return 10;
	}

}
