#include <stdio.h>
#include <stdlib.h>

int sumdgt(int);

int main()
{
	system("clear");

	int num;

	printf("Enter the num\n");
	scanf("%d", &num);

	printf("The sum of digits is %d\n", sumdgt(num));

}

int sumdgt(int num)
{
	int rem;
	if ( num == 0 )
	{
		return 0;
	}
	rem = num % 10;
	num = num / 10;
	return rem + sumdgt(num);
}
