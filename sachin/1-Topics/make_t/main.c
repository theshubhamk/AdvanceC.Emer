#include "common.h"

int main()
{
	int a, b;
	printf("Enter two number");
	scanf("%d%d", &a, &b);

	printf("sum: %d\n", add(a,b));
	printf("mul: %d\n", mul(a, b));
}
