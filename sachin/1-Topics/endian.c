#include <stdio.h>

typedef union
{
	int a;
	unsigned char b;
}endian_t;
int main()
{

	endian_t x;
	x.a = 0x1a2b3c8d;

	if (x.b == 0x8d)
	{
		printf("little endian");
	}
	else
	{
		printf("big endian");
	}
}
