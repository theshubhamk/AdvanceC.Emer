#include <stdio.h>

#define SIZEOF(k) (char *)(&k+1) -(char *)&k

int main()
{
	int a;
	double d;
	
	printf("Sizeof(a): %ld\n", SIZEOF(a));
	printf("Sizeof(d): %ld\n", SIZEOF(d));
}
