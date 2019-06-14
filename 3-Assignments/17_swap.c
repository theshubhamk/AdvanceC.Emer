#include <stdio.h>
#include <stdlib.h>

void swapp(int*, int*);

int main()
{

	//clear screen
	system("clear");
	
	//declare vars
	int *n1, *n2;

	//prompt + read user
	printf("Enter two nos\n");
	scanf("%d\n%d", n1, n2);
	
	swapp(n1, n2);
	return 0;
}

void swapp(int *n1, int *n2)
{
	int *n1, *n2;
	&n1 = n2;
	&n2 = n1;
	printf("%d and %d\n", n1, n2);
}


