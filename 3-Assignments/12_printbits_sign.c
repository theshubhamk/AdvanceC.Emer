#include <stdio.h>
#include <stdlib.h>

int main()
{

	//clear screen
	system("clear");

	//declare vars
	unsigned mask, num, result;

	//prompt user
	printf("enter the number\n");

	//read user
	scanf("%X", &num);

	//logic
	mask = 1 << 31;
	if ( num & mask )
	{0000000
		result = 1;
	}
	else
	{
		result = 0;
	}

//num & m1? res=1 :res=0 ;
	printf("%d\n", result);

	
}


