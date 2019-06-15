


#include<stdio.h>
#include<stdlib.h>

int main()
{
	//clear the output screen
	system("clear");

	//declare the variables
	int n;

	//prompt user for input
	printf("ENTER A NUMBER:  ");

	//read user input
	scanf("%d", &n);

	//logic
	if ( 100 <= n && n <= 999 )
	{
		printf(" %d lies in the range 100 t0 999", n);
		exit(1);
	}
	printf(" %d does not lie in the range 100 to 999", n);
	return 0;
}


