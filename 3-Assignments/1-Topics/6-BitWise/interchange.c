#include <stdio.h>

int main()
{

	unsigned char  n1, n2, num1, num2, m2, m1, ir1, ir2, res;
	int n;


	printf("enter num1\n");
	scanf("%hhX",&n1);

	printf("enter num2\n");
	scanf("%hhX", &n2);

	printf("enter the bits to be exchanged of num1 \n");
	scanf("%d" , &n);

	m2 =( ~( (~0)<<2));
	m1 =( ~ (m2<<n));
	ir2=n2 & m2;
	ir1=n1 & m1;
	ir2= ir2 << n;
	res=ir1 | ir2;

	printf("%hhX", res);
}
