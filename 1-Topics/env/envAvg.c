#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *env[])
{
	int i;
	for(i = 0; env[i];i++)
	{
		if(strncmp(env[i], "ARRAY", 5) == 0)
		{
			printf("Match found: %s\n", env[i]);
			int sum = 0;
			exit(1);
		}
	}
}
