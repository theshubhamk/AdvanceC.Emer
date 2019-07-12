/*		TITLE: Reads and prints the integer value. Works like scanf.
		AUTHOR: Shubham Kumar Singh
		DATE:Sun Jul  8 13:51:48 IST 2019
		DESCRIPTION: Input: Read a number from user.
		Output: print the integer value.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declare the function
int read_int(int *);

int main()
{
	//clear screen
	system("clear");
	//declare vars
	int num = 0;

	//promtp +read user
	printf("Enter a value\n");
	//call the function

	//	read_int(&num);
	printf("%d\n", read_int(&num));			

}

int read_int(int *a)
{
	int i, num = 0, flag = 0;
	char c;
	//	char a[0] = 0;
	for(i = 0;((c = getchar()) != '\n');i++)	
	{
		if(c == '-')
		{
			flag = 1;
			c = getchar();
		}
		if(c >= 0 && c <= '9')
		{		
			num = (num * 10) + (c -'0');	
		}
	}
	if (flag)
	{
		return -num;
	}	
	else
	{
		return num;
	}
}
