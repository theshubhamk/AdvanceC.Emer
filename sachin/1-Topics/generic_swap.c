#include <stdio.h>

#define GENERIC_SWAP(a, b, type) { type temp = a; \
				   a = b;         \
				   b = temp;      \
				 }

int main()
{
	char c1 = 'A';
	char c2 = 'B';
	GENERIC_SWAP(c1, c2, char);
	printf("After swapping c1: %c\tc2: %c\n", c1, c2);

	int i1 = 10;
	int i2 = 20;
	GENERIC_SWAP(i1, i2, int);
	printf("After swapping i1: %d\ti2: %d\n", i1, i2);
	
	float  f1 = 1.2;
	float f2 = 3.4;
	GENERIC_SWAP(f1, f2, float);
	printf("After swapping f1: %f\tf2: %f\n", f1, f2);
	
	double d1 = 23.345;
	double d2 = 34.456;
	GENERIC_SWAP(d1, d2, double);
	printf("After swapping d1: %lf\td2: %lf\n", d1, d2);
	
	char *p1 = "Good";
	char *p2 = "Bad";
	GENERIC_SWAP(p1, p2, char *);
	printf("After swappingp p1: %s\tp2: %s\n", p1, p2);
}
