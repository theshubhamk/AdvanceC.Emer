/*		TITLE: left or right rotate the number
		AUTHOR: Shubham Kumar Singh
		DATE: Sun Jun  9 11:57:41 IST 2019
		DESCRIPTION: Input: A number from user.
			     Output: Print the rotated number.
*/

#include <stdio.h>
#include <stdlib.h>

//declare functions
int circular_right_rot(unsigned, int);

unsigned circular_left_rot(unsigned, int);

int main()
{
	//clear screen
	system("clear");

	//declare vars
	unsigned char num;
	int n, x;

	//prompt + read user
	printf("Enter the number\n");
	scanf("%hhd", &num);

	printf("Enter the number of rotations\n");
	scanf("%d", &n);
	
	printf("enter 1 for rotate right else 2 for rotate left\n");
	scanf("%d", &x);
	//call and print the function
	switch (x)
	{
		case 1:
			printf("the number after %d roations is %hhd\n", n, circular_right_rot(num, n));
			break;
		case 2:
			printf("the number after %d roations is %hhd\n", n, circular_left_rot(num, n));
			break;
		default :
			printf("Please select 1 or 2\n");
	}
}

int circular_right_rot(unsigned num, int n)
{
	unsigned temp1, temp2;
	temp1 = num >> (8-n);
	temp2 = num << n;
	return temp1 | temp2;
}

unsigned circular_left_rot(unsigned num, int n)
{
	unsigned temp1, temp2;
	temp1 = num << (8-n);
	temp2 = num >> n;
	return temp1 | temp2;
}
