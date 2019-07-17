#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argr[])
{
	char ch;

	//1.declare the file pointer
	FILE *fs, *fd;
	fs = fopen(argr[1], "r");

	//2.open the source file in read mode
	if (fs == NULL)
	{
		perror(argr[1]);
		exit(1);
	}

	//3.open the destination file in write mode
	fd =  fopen(argr[2], "w");
	if (fd == NULL)
	{
		perror(argr[2]);
		exit(2);
	}
	
	//4.logic for copying
	while ((ch = fgetc(fs)) != EOF)
	{
		fputc(ch, fd);
	}

	fclose(fs);
	fclose(fd);


}
