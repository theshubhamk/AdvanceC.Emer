#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argr[])
{
	float sum;
	int i;
	if (argc == 1)
	{
		printf("Insufficent ..args..\n");
		exit(1);
	}
	for (i = 1; i < argc; i++)
	{
		sum += atof(argr[i]);
	}
	printf("avg= %f", sum/(argc-1));
}

