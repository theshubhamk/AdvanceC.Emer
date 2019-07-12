/*		TITLE: Converts from ascii to integer.
		AUTHOR: Shubham Kumar Singh
		DATE:Sun Jul  7 13:51:48 IST 2019
		DESCRIPTION: Input: Read a number in string from user.
			     Output: print the integer value.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declare the function
int aTOi(const char *);
char * iTOa(int);
void reverse(char *, int);
void getWords(char *string);

int main()
{
	//clear screen
	system("clear");
	//declare vars
	char string[10];
	int num, op, i, status;
	//prompt + read user
	printf("Select 1. aTOi 2.iTOa 3.getWords\n");
	scanf("%d", &op);
	switch(op)
	{
		case 1:
			//promtp +read user
			printf("Enter a value\n");
			scanf("%s", string);
			//check for invalid characters
			for(i = 0;i < strlen(string);i++)
			{
				if((*(string+i) > 57) || (*(string+i) < 48))
				{
					printf("Enter numbers in strings\n");
					exit(1);
				}
				
			}	
			//call funtion
			num = aTOi(string);

			//print the output
			printf("%d", num);
			break;
		case 2:
			//promtp +read user
			printf("Enter a value\n");
			status = scanf("%d", &num);
			//check for error
			if(status != 1)
			{
				printf("Enter only numbers\n");
				exit(1);
			}
			//call funtion
			char *p = iTOa(num);
			//print the output
			printf("%s", p);
			break;
		case 3:
			//promtp +read user
			printf("Enter a value\n");
			scanf("\n%[^\n]s", string);
			//call funtion
			getWords(string);
			break;
		default:
			printf("Enter the correct option\n");
	}
	

}

int aTOi(const char *p)
{
	int num = 0, digit;
	while(*p)
	{
		//take char ---> int
		digit = *p - '0';
		//1234 = 12*10 + 3
		num = num * 10 + digit;
		//increment the pointer
		p++;
	}
	return num;
}

char * iTOa(int num)
{
	static char a[10] = {'\0'};
	int i = 0, digit;
	while(num)
	{
		digit = num % 10;
		a[i] = digit + '0';
		i++;
		num = num / 10;
	}
	reverse(a, strlen(a));
	return a;
}
//function for reverse
void reverse(char *a, int n)
{
	int temp, i, j;
	for(i = 0, j = n - 1;i < j;i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
//get words
void getWords(char *string)
{
	int count = 0;
	while(*string != '\0')
	{
		count++;
		string++;
	}
	printf("Count is %d\n", count);
}
