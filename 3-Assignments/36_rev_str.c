/*		TITLE: Read an string and print its reverse.
		AUTHOR: Shubham Kumar Singh
		DATE: Mon Jun  20 12:23:11 IST 2019 
		DESCRIPTION: Input: Read a string.
			     Output:print the reverse of the string;
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declare functions
int rev_stg(char *, int);
int stringlen(char *);

int main()
{
	//clear the screen
	system("clear");
	//declare vars
	char str1[80];// = {'\0'};
	//int len;
	//prompt + read user
	printf("Enter the string to be reversed\n");
	//str1 = getc();
	scanf("%[^\n]s", str1);
	//find the length
	getchar();
	int len = stringlen(str1);
	printf("%d\n",len);
	//call the function
	rev_stg(str1, len - 1);
	//print the output
	printf("The reversed string is : %s\n", str1);

	return 0;
}
//define the reverse function
int rev_stg(char *str1, int lenn)
{
	char temp, *temp1;
	temp1 = &str1[lenn];
	if(str1 < temp1)
	{
		temp = *str1;
		*str1++ = *temp1;
		*temp1-- = temp;
		rev_stg(str1, lenn - 2);
	}

}
//define the string length function
int stringlen(char *str1)
{
	int count = 0;
	while(*str1 != '\0')
	{
		count++;
		str1++;
	}
	return count;
}