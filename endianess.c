#include <stdio.h>
#include <stdlib.h>

typedef union
{
	int a;
	unsigned char b;
}endian_t;
int main()
{
	endian_t x;
	x.a = 0x1A2B3C8D;
	if(x.b == 0x8D)
	{
		printf("LE\n");
	}
	else
	{
		printf("BE\n");
	}
}
