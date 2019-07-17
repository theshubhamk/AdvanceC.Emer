#include <stdio.h>

typedef struct sample
{
	int a : 3;
	int b : 3;
}data_t;

int main()
{
	data_t x = {2, 6};
	printf("%d %d\n", x.a, x.b);
}

