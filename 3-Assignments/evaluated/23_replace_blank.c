/*		TITLE: Replacing more than one blanks with single blank and printing the output.
		AUTHOR: Shubham Kumar Singh
		DATE: Mon Jul  8 12:49:29 IST 2019
		DESCRIPTION: Input: a line with multiple blanks.
			     Output:print the output with single blanks.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//clear screen
	system("clear");
	//declare vars
	char c, prevChar;
	int count = 0;
	//take input till the enter is pressed
	while((c = getchar()) != '\n' )
	{
		//check for blank
		if(c == ' ')
		{
			//if the previous character is not blank the print the character
			if(prevChar != ' ')
			{	
				putchar(c);	
			}
		}	
		//else print the next character
		else
		{
			putchar(c);
		}
		//assign previous character as c
		prevChar = c;
	}
}
