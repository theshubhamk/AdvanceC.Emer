#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("clear");
	//declare variables
	unsigned char num;
	int n;

	//prompt  + read  the input
	printf("Enter the num and n: ");
	scanf("%hhX%d", &num, &n);

	// logic
	num = num & ~ (1 << n);
	
	//print the result
	printf("res: %hhX\n", num);
}
