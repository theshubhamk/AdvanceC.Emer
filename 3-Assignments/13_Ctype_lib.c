#include <stdio.h>
#include <stdlib.h>

void is_alnum(int);
void is_alpha(int);
void is_ascii(int);
void is_blank(int);

int main()
{
	//clear scr
	system("clear");
	
	//decare vars
	char ch;

	//prompt + read user
	printf("Enter a char\n");
	scanf("%c", &ch);
	
	is_alnum(ch);
	is_alpha(ch);
	is_ascii(ch);
	is_blank(ch);
}

void is_alnum(int ch)
{
	if (48 <= ch  & ch <= 57)
	{
		printf("number\n");
	}
	else if ((ch <= 90 && ch >= 65) || (97 <= ch && ch <= 122))
	{
		printf("alphabet\n");
	}
}

void is_alpha(int ch)
{
	if (ch <= 90 && ch >= 65)
	{
		printf("upper case\n");
	}
	else if(97 <= ch && ch <= 122)
	{
		printf("lower case\n");
	}
}

void is_ascii(int ch)
{
	if(0 <= ch && ch <= 127)
	{
		printf("ASCII\n");
	}
}

void is_blank(int ch)
{
	if(ch == 32 || ch == 9)
	{
		printf("blank character eneterd\n");
	}
}
