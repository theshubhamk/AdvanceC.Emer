/*		TITLE: Implementing pre and post increment operator by passing pointer as parameter.
		AUTHOR: Shubham Kumar Singh
		DATE: Fri Jun  14 15:23:11 IST 2019
		DESCRIPTION: Input: A number from user.
			     Output:print the output numbers.
*/
#include <stdio.h>
#include <stdlib.h>

int pre_inc(int *);
int post_inc(int *);

int main()
{
	//clr scr
	system("clear");

	//declare vars
	int num, res, op;
	
	//prompt + read user
	printf("Enter a number\n");
	scanf("%d", &num);
	
	//ask option
	printf("select 1.pre increment 2.post increment\n");
	scanf("%d", &op);
	switch (op)
	{
		case 1:
			//call function
			res = pre_inc(&num);
			printf("res = ++num\n");
			printf("num is %d and res is %d\n", num, res);
			break;
		case 2:
			//call function
			res = post_inc(&num);
			printf("res = num++\n");	
			printf("num is %d and res is %d\n", num, res);
			break;
		default:
			printf("Enter a valid option\n");
	}
	return 0;
}
int pre_inc(int *num)
{
	int i = 1;
	while(i & *num)
	{
		*num = *num ^ i;
		i = i << 1;
	}
	*num = *num ^ i;
	return *num;
}
int post_inc(int *num)
{
	int i = 1;
	while(i & *num)
	{
		*num = *num ^ i;
		i = i << 1;
	}
	*num = *num ^ i;
	return *num - 1;
}
