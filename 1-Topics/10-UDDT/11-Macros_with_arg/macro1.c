#include <stdio.h>

#define MAX(a,b) a > b ? a : b

int main()
{
	int x, y;
	int m = MAX(3,2);
	
	printf("Enter two values\n");
	scanf("%d%d", &x, &y);

	printf("Max(%d, %d) : %d\n",x, y, MAX(x, y));
}
