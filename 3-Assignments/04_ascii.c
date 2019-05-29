#include <stdio.h>
#include <stdlib.h>

int main()
{
		//clear screen
		system("clear");
		int num,i;

		printf("oct\t dec\t hex\t char\t\n");
		for(i=0;i<=127;i++)
		{
			num=i;
		
			printf("%o\t %d\t %X\t %c\t\n",i,i,i,i);
		}

	
}

