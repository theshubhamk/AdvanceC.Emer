#include <stdio.h>
typedef struct sample
{
unsigned int a : 3;
	unsigned int b : 3;
}data_t;

int main()
{
	data_t x = {2, 7};
	printf("%d %d\n", x.a, x.b);
}
