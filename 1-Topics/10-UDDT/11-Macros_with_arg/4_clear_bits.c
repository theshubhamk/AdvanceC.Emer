#include <stdio.h>

#define CLR_N_BIT(num, n, loc) (num & ~(~(~(0 << n)) << loc))

int main()
{
	unsigned char num;
	int n, loc;

	printf("Enter the num\n");
	scanf("%hhx", &num);

	printf("Enter the n value\n");
	scanf("%d", &n);

	printf("Enter the loctaion\n");
	scanf("%d", &loc);
	
	num = CLR_N_BIT(num, n, loc);
	printf("After clearing: num:  %hhx\n", num);
}

