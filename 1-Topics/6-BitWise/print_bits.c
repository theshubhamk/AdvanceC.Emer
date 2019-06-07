#include <stdio.h>

int main()
{
	//declare vars
	unsigned num, mask;

	//prompt + read user
	printf("Enter the number\n");
	scanf("%d", &num);

	mask = 1 << (sizeof(int) << 3) - 1;
	for( ;mask; mask >>= 1)
	{
		num & mask? putchar('1'): putchar('0');
	}
	putchar('\n');
}


