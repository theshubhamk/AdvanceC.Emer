#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argr[])
{
	int res = atoi(argr[1]) + atoi(argr[2]);
	printf("sum=%d", res);
}

