#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear screen
	system("clear");

	//declare vars
	int f;

	//prompt user
	printf("enter the temperature in farenheit\n");

	//read user
	scanf("%d", &f);

	//logic
	float c=((5.0f / 9) * ((float)f-32));

	printf("the temp in celsius is : %0.2f\n" , c);

	return 0;
}

