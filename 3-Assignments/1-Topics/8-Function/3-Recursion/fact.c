#include <stdio.h>
#include <stdlib.h>

int fact(int);

int main()
{
	//clr scr
	system("clear");

	int num;

	printf("Enter a value\n");
	scanf("%d", &num);
	if (num < 0)
	{
		printf("Enter a +ve number\n");
		exit(1);
	}

	printf("the factorial is %d\n", fact(num));

}

int fact(int num)
{
	if(num <= 1)
	{
		return 1;
	}
	return num * fact(num - 1);
}

