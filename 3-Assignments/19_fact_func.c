/*		TITLE: find factorial using recursive single main function
		AUTHOR: Shubham Kumar Singh
		DATE: Sun Jun  12 11:57:41 IST 2019
		DESCRIPTION: Input: A number from user.
			     Output: Print the factorial.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//static is to initialize the num only once. If the num changes the value will not be reinitialized on every fuction call.
	static int num = 1, fac = 1,n;
	//logic
	//if the number is 1 take user data . since due to 'static' num will be inititalized only once.
	if (num == 1)
	{
		printf("Enter the number\n");
		scanf("%d", &n);	
	}	
	//this is to terminate the function and print factorial.
	if (num == n)
	{
		printf("%d\n", fac);
		return 0;
	}
	//increment the number upto the user enetered value.
	num = num + 1;
	fac = fac * (num);
	//recall the main function
	return main();
}
