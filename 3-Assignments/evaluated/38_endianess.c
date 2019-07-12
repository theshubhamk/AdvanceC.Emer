/*		TITLE: Implement endianess using pointers and functions
		AUTHOR: Shubham Kumar Singh
		DATE:Sun Jul  7 13:51:48 IST 2019
		DESCRIPTION: Input: no input.
			     Output: print the endianess.
*/
#include <stdio.h>
#include <stdlib.h>

void endiann(char *, char *);

int main()
{   
    char value[3];
    int i = 0;
    printf("Enter a value\n");
    for(i = 0;i <3;i++)
    {
    	scanf("%c",value);
    }
    //char value[3] = "8D";
    char *ptr = (char *)&value;
    
    printf ("%p has %c\n", ptr, *ptr);
    endiann(ptr,value);
   // ptr = ptr + sizeof(char);
   // printf ("%p has %c\n", ptr, *ptr);
}

void endiann(char *ptr,char *value)
{
	
    if (*ptr == *value)
    {
         printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
}
