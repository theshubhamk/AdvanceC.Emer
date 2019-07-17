#include <stdio.h>

int sum(int);

int main()
{
	int num, res;

	printf("enter the number: ");
	scanf("\n%d", &num);

	printf("sum of %d : %d ", num, sum(num));
}

int sum(int num)
{
	if (num % 10 == 0)
	{
		return num;
	}
	return num % 10 + sum(num / 10);
}

