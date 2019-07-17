#include <stdio.h>

int add(int a, int b)
{
		return a + b;
}

int main()
{
		//Declare the function pointer
		int (*fp)(int, int);

		//Init the function pointer
		fp = add;

		//Invoke the add function thru' function pointer
		int res = (*fp)(10, 20);

		//Printing the res
		printf("Res: %d\n", res);

		return 0;
}
