/*		TITLE: Size of Basic data types.
		AUTHOR: Shubham Kumar Singh
		DATE: Fri May 24 16:10:14 IST 2019
		DESCRIPTION: Input: no user input
			     Output: Print the sizes of all basic data types
*/



#include <stdio.h>
#include <limits.h>

int main()
{
	//clear the screen
	system("clear");
	
	printf("Sizeof(char): %zu\n", sizeof(char));
	printf("Sizeof(signed char): %zu\n", sizeof(signed char));
	printf("Sizeof(unsigned char): %zu\n", sizeof(unsigned char));
	
	printf("Sizeof(int): %zu\n", sizeof(int));
	printf("Sizeof(signed int): %zu\n", sizeof(signed int));
	printf("Sizeof(unsigned int): %zu\n", sizeof(unsigned int));
	
	printf("Sizeof(short int): %zu\n", sizeof(short int));
	printf("Sizeof(long int): %zu\n", sizeof(long int));
	printf("Sizeof(long long int): %zu\n", sizeof(long long int));

	printf("Sizeof(short unsigned int): %zu\n", sizeof(short unsigned int));
	printf("Sizeof(long unsigned int): %zu\n", sizeof(long unsigned int));
	printf("Sizeof(long long unsigned int): %zu\n", sizeof(long long unsigned int));
	
	printf("Sizeof(float): %zu\n", sizeof(float));
	printf("Sizeof(double): %zu\n", sizeof(double));
	printf("Sizeof(long double): %zu\n", sizeof(long double));
	
	return 0;
}
