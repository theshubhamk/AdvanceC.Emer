/*		TITLE: Read num, value. Put (b - a + 1) bits of num into value[b : a]
		AUTHOR: Shubham Kumar Singh
		DATE: Sun Jun  9 10:17:21 IST 2019
		DESCRIPTION: Input: Read num value, 0 <= a <= b <= 31.
			     Output: Put (b - a + 1) lsb's of num into value.
*/

#include <stdio.h>
#include <stdlib.h>

//declare functions
int bitwise_lsb(unsigned, unsigned, int, int);

int main()
{
	//clear screen
	system("clear");

	//declare vars
	unsigned num, val, mask;
	int bits, b, a;

	//prompt + read user
	printf("enter the number\n");
	scanf("%d", &num);

	printf("enter the value\n");
	scanf("%d", &val);

	printf("enter the 0 <= a <= b <= 31\n");
	scanf("%d\n %d", &a, &b);

//	bits = b - a + 1;

	//call and print function
	printf("the new value is %d\n", bitwise_lsb(num, val, a, b));
	printf("\n");
	mask = 1 << (sizeof(int) << 3) - 1;
	for( ;mask; mask >>= 1)
	{
		bitwise_lsb(num, val, a, b) & mask? putchar('1'): putchar('0');
	}		
	putchar('\n');
}

int bitwise_lsb(unsigned num, unsigned val, int a, int b)
{
	int bits;
	bits = b - a + 1;
	return (((~((0xFF << a) & (0xFF >> (7-b)))) & (val)) | (((((~(0xFF << bits)) & (num))) << (b - bits + 1))));
}
