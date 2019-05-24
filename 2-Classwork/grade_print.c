#include <stdio.h>
#include <stdlib.h>


int main()
{
	//clear o/p scr
	system("clear");

	//declare vars
	int percent;

	//promopt user
	printf("enter percentage: ");
	
	//read input
	scanf("%d", &percent);
	
	//logic

	if(percent>=90)
		printf("A");
	else if(80<=percent && percent<90)
		printf("B");
	else if(70<=percent && percent<80)
		printf("C");
	else if(60<=percent && percent<70)
		printf("D");
	else if(50<=percent && percent<60)
		printf("E");
	else 
		printf("F");

	return 0;

}
