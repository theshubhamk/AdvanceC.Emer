#include <stdio.h>

int main()
{
	char ch = 'A';

	printf("&ch, %p",&ch);
	printf("\nch %c\n", *&ch);
}
