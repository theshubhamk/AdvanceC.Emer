#include <stdio.h>

int main()
{
	char ch = 'A';

	printf("&ch: %p",&ch);
	printf("\nch: %c\n", *&ch);

	int a = 10;
	int *p = &a;
	printf("&a : %p\n", p);
	printf("a: %d\n", *p);
	printf("sizeof(p) %zu\n", sizeof(p));


}
