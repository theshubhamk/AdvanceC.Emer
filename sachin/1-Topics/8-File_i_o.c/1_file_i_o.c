#include <stdio.h>


int main()
{
	char ch;
	//open file
	FILE *fp = fopen("samp.txt", "r");

	//handle error
	if (fp == NULL)
	{
		perror("fopen");
	return 0;	
	}
	while ((ch = fgetc(fp)) != EOF)
	{
		fputc(ch, stdout);
	}
		fclose(fp);
}
