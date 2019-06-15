#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clr scrn
	system("clear");

	//declare vars
	int sum=0, i=0, n;

	//promtpt for input
	printf("enter the value of n\n");

	//read inp
	scanf("%d", &n);


	while (i <= n)
	{
		sum = sum + i;
		i++;
	}
	printf("sum is %d", sum);
	return 0;
}
