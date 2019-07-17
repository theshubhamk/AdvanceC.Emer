#include <stdio.h>

#define SET_N_BIT(num, n) (num | (1 << n))

int main()
{
	unsigned char num;
	int n;

	printf("Enter the num\n");
	scanf("%hhx", &num);

	printf("Enter the n value\n");
	scanf("%d", &n);

	num = SET_N_BIT(num, n);
	printf("After setting: num:  %hhx\n", num);
}

