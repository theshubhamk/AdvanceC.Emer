#include <stdio.h>

int main()
{
	int x=10, z;

	z= ++x + ++x;
	printf("%d %d", z, x);
	printf("\n");
}
