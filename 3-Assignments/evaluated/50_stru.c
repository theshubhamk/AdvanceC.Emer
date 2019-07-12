/*		TITLE: print the demoted value of floating point number.
		AUTHOR: Shubham Kumar Singh
		DATE:Sun Jul  9 13:51:48 IST 2019
		DESCRIPTION: Input: No user input.
			     Output: Prints the demoted value.
*/

#include <stdio.h>
//declare functions
void print_bits(unsigned int, int);
//define the struct
typedef struct
{
	unsigned mantissa: 23;
	unsigned exp: 8;
	unsigned sign: 1;
}demoted_t;

int main()
{
	
	float f = 1478.235; //12.25  ; // 1478.235
	//demoted_t a = f; THIS IS WRONG
	demoted_t *p = (demoted_t *) &f;

	print_bits(p->sign, 1);
	print_bits(p->exp, 8);
	print_bits(p->mantissa, 23);
	printf("\n");
	int n = (p->exp) - 127;
	int demoted_val = (((p->mantissa) >> (23 -n))) | (1 << n);
	printf("%d", demoted_val); 
}

void print_bits(unsigned int num, int n)
{
	unsigned mask = 1 << (n - 1);
	for( ; mask; mask >>= 1)
	{
		num & mask ? putchar('1'):putchar('0');
	}
	putchar('\t');
}

