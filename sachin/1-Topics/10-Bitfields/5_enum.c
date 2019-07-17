#include <stdio.h>

enum week
{
	SUN,
	MON,
	THE,
	WED = 'A',
	THU,
	FRI, 
	SAT
};

int main()
{
	int i;
	int a[7] = {SUN,MON,THE,WED,THU,FRI,SAT};

	for (i=0; i<7; i++)
		{
			printf("%d ", a[i]);
		}
}
