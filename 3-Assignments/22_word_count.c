#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear screen
	system("clear");

	char temp[100];
	int count = 0;
	char ch, ch1 = ' ';
	int word_count = 0, line_count = 0, char_count = 0;

	puts("Enter the string:");
	while((ch = getchar()) != EOF )
	{
		char_count++;
		if (ch == '\n')
		{
			line_count++;
		}
		if (ch != ' ' && ch == '\0' && ch == '\t')//(ch >= '!' && ch <= '~') || (ch1 < '!' && ch1 > '~'))
		{
		 	word_count++;
		}

		ch1 = ch;
	}
		printf("\t%d\t", line_count);
		printf("%d\t", word_count);
		printf("%d\t", char_count);

}
