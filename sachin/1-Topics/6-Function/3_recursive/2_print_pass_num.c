#include <stdio.h>
#include <stdlib.h>
void print(int);

int main()
{
	//clear the output screen
	system("clear");

	int num;
	printf("enter the number: ");
	scanf("\n%d", &num);
	print(num);
	putchar('\n');

}
void print(int num)
{
	if (num == 0)
	{
		return;
	}
	print(num - 1);
	printf("%d", num);
}
