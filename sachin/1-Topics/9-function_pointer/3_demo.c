#include <stdio.h>

int add(int a, int b)
{
		return a + b;
}

int prod(int a, int b)
{
		return a * b;
}

int div(int a, int b)
{
		return a / b;
}

int main()
{
		//Declare array of function pointers
		//Syntax: return-type (*fp[SIZE])(parameter-list);

		int (*fp[3])(int, int) = {add, prod, div};

		int i;
		for (i = 0; i < 3; i++)
		{
				printf("Res: %d\n", (*fp[i])(20, 10));
		}
}
