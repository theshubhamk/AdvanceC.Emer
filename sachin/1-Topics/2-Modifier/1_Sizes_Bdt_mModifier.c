#include <stdio.h>
#include <limits.h>

int main()
{
	   printf ("sizeof(char); %zu\n", sizeof(char));
	   printf ("sizeof(signed char); %zu\n", sizeof(signed char));
	   printf ("sizeof(unsigned char); %zu\n", sizeof(unsigned char));
	   
	   printf ("sizeof(int); %zu\n", sizeof(int));
	   printf ("sizeof(signed int); %zu\n", sizeof(signed int));
	   printf ("sizeof(unsigned int); %zu\n", sizeof(unsigned int));
	   
	   printf ("sizeof(short int); %zu\n", sizeof(short int));
	   printf ("sizeof(long int); %zu\n", sizeof(long int));
	   printf ("sizeof(long long int); %zu\n", sizeof(long long int));
	   
	   printf ("sizeof(short unsigned int); %zu\n", sizeof(short unsigned int));
	   printf ("sizeof(long unsigned int); %zu\n", sizeof(long unsigned int));
	   printf ("sizeof(long long unsigned int); %zu\n", sizeof(long long unsigned int));
	   
	   printf ("sizeof(float); %zu\n", sizeof(float));
	   printf ("sizeof(double); %zu\n", sizeof(double));
	   printf ("sizeof(long double); %zu\n", sizeof(long double));
}
