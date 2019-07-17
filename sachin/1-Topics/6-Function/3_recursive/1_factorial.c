#include <stdio.h>

int fact(int);
int main()
{
	int num;
	printf("enter the number: ");
	scanf("\n%d", &num);

	printf("factorial of %d : %d", num, fact(num));
}

int fact(int num)
{
	if (num == 0 || num == 1)
	{
		return 1;
	}
	return num * fact(num - 1);
}

