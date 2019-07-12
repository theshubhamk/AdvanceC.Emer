#include <stdio.h>

int fun1()
{
	static int num = 10;
	num += 10;
	printf("%d\n", num);
	return 0;

}

int main()
{
	fun1();
	fun1();
	fun1();
}

