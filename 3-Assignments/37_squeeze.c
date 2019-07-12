#include<stdio.h>
#include <string.h>

void squeeze(char *str1, char *str2);

int main()
{
	char option;
	char string1[40], string2[40]; 

	printf("Enter the string1:");
	scanf("%s", string1);

	printf("Enter the string2:");
	scanf("%s", string2);
	squeeze(string1, string2);

	printf("Squeeze string is %s", string1);
	return 0;
}

void squeeze(char *str1, char *str2)
{
	int i, j, k;
	//itirate thru the strings
	for (i = 0; *(str1 + i); i++)
	{
		for(j = 0; *(str2 + j); j++ )
		{
			//match the elements 
			if(*(str1 + i) == *(str2 + j))
			{
				for (k = i + 1; *(str1 + k); ++k)
				{
				//if match found replace that element with next element of the same string
					*(str1 + i) = ' ';//*(str1 + k); 
				}
			}
	
		}		
	}
}
