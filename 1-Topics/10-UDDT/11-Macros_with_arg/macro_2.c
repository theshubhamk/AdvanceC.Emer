#include <stdio.h>
#define PRINT(k) printf("VALUE: %c = %d",#k)

int main()
{
	/* code */
	int x = 1;
	float f = 3.14;
	char ch = 'A';

	PRINT(x, %d);
	PRINT(f, %f);
	PRINT(ch, %c);

	return 0;
}
