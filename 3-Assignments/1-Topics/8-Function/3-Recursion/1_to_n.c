#include <stdio.h>
#include <stdlib.h>

void prin(int);

int main()
{
	system("clear");

	int num;

	printf("Enter a number\n");
	scanf("%d", &num);

	prin(num);

}

void prin(int num)
{
	if (num == 0)
	{
		return;
	}
//	printf("%d", num);
	prin(num - 1);
	printf("%d", num);
}

