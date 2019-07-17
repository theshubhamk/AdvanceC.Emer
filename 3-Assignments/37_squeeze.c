/*		TITLE: Read two strings and print the first string after deleting the matching letters.
		AUTHOR: Shubham Kumar Singh
		DATE: Mon Jun  18 12:23:11 IST 2019
		DESCRIPTION: Input: Read two strings.
			     Output:print the elements after deleting the similar letters.
*/
#include <stdio.h>
#include <string.h>
//declare the functions
void squeeze(char *str1, char *str2);

int main()
{
	//clear screen
	system("clear");
	//decare vars
	char option;
	char string1[40], string2[40]; 
	//promot + read user
	printf("Enter the string1:");
	scanf("%[^\n]s", string1);
	getchar();
	//prompt + read user
	printf("Enter the string2:");
	scanf("%[^\n]s", string2);
	squeeze(string1, string2);
	//print the output
	printf("Squeeze string is %s", string1);
	return 0;
}
//define the function
void squeeze(char *str1, char *str2)
{
	int i, j, k = 0;
	//itirate thru the strings
	for (i = 0; *(str1 + i) != '\0'; i++)
	{
		for(j = 0; (*(str1 + i) != *(str2 + j)) && (*(str2 + j) != '\0');j++ );
		{
			//match the elements 
			if(*(str2 + j) == '\0')
			{
				{
					//if match found replace that element with next element of the same string
					str1[k++] = str1[i];
				}
			}
	
		}		
	
	}
	str1[k] = '\0';
}
