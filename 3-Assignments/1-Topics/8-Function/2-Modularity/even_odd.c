#include <stdio.h>
#define EVEN		 1
#define ODD			 2
#define VALID		 0
#define INVALID		-1

int is_valid(int);
int is_even_odd(int);

int main()
{
	int num;
	
	printf("Enter the num\n");
	scanf("%d", &num);
	
	switch (is_valid(num))
	{
		case -1:
			printf("%d : INVALID", num);
			break;
		default:
			switch (is_even_odd(num))
			{
				case 0:
					printf("%d: EVEN\n", num);
					break;
				case 1:
					printf("%d: ODD\n", num);
			}
	}


	return 0;

}

int is_valid(int num)
{
	if (num < 100 &&  num > 200)
	{
		return INVALID;
	}
	return VALID;
}

int is_even_odd(int num)
{
	if(num % 2)
	{
		return ODD;
	}
	else
	{
		return EVEN;
	}
}


