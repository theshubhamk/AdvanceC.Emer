/*		TITLE: Size of macro.
		AUTHOR: Shubham Kumar Singh
		DATE:Sun Jul  7 1:14:08 IST 2019
		DESCRIPTION: Input: No user input.
			     Output: print the sizeOf value.
*/
#include <stdio.h>

#define SIZEOF(k) (char *)(&k+1) -(char *)&k

int main()
{
	int a;
	double d;
	
	printf("Sizeof(a): %ld\n", SIZEOF(a));
	printf("Sizeof(d): %ld\n", SIZEOF(d));
}
