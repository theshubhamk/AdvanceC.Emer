/*		TITLE: read N names of maxlen 32 and sort them
		AUTHOR: Shubham Kumar Singh
		DATE:Sun Jul  7 12:01:48 IST 2019
		DESCRIPTION: Input: names from user
			     Output: Sorted names.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLEN 32
//decalre the sort function
void sortt(char * arr[], int);
//declare the compare function
int mystrcmp(char *, char *);

int main()
{
	//clear screen
	system("clear");
	//declare vars
	int i, j, n;
	//prompt + read user
	printf("Enter the no. of names\n");
	scanf("%d", &n);
	//declare an array
	char **a;
	//read the names
	printf("Enter the names\n");
	
	//allocate memory dynamically for names
	char ** const sptr = (char**)malloc(sizeof(char*) * n);

    	if (NULL == sptr) 
	{
        	printf("Error: Malloc allocation Failure \n");
        	return 1;
    	}
	for (i = 0; i < n; i++)
    	{	
        	sptr[i] = (char*)malloc(sizeof(char) * (MAXLEN+1));
        
        	if (NULL == sptr[i]) 
		{
            		printf("Error: Malloc allocation Failure for Person [%d] \n", i);
            		return 1;
        	}
	}
	
	a = sptr;

	for(i = 0;i < n;i++)
	{
	//	for(j = 0;j < 32;j++)
	
		printf("%d\t:",i);
		scanf("%s", a[i]);

		if(strlen(a[i]) > MAXLEN)
		{
			printf("error: Enter the name of size < 32\n");
			exit(1);
		}
	}
	
	sortt(a, n);
	printf("sorted array is\n");
	for(i = 0;i < n;i++)
	{
//		for(j = 0;j < 32;j++)
		printf("%d\t:",i);
		printf("%s", a[i]);
		printf("\n");

	}
}

void sortt(char * arr[], int n)
{
	char temp[32];
	int i, j;
	for(i = 0;i < n;i++)
	{
		for(j = i + 1;j < n;j++)
		{	
			if((mystrcmp(*(arr+i),*(arr+j))) > 0)
			{
				strcpy(temp, *(arr+i));
				strcpy(*(arr+i), *(arr+j));
				strcpy(*(arr+j), temp);
			}
		}
	}
}
int mystrcmp(char *str1, char *str2)
{
	while(*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	if(*str1 == *str2)
	{
		return 0;
	}
	else
	{
		return (*str1 - *str2);
	}
}
