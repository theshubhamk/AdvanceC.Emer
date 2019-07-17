#include <stdio.h>
#include <stdarg.h>

int main(int argc, char *argv[])
{

	//1.declare the file pointer
	FILE *fs, *fd;
	char buffer;

	//2.open the source binary file in read mode
	fs = fopen(argv[1], "rb");

	if(fs == NULL)
	{
		perror(argv[1]);
		return 0;
	}

	//3.open the destination file in write binary mode
	fd =  fopen(argv[2], "w");
	if(fd == NULL)
	{
		perror(argv[2]);
		return 1;
	}
	
	//4.logic for copying
	while (fread (&buffer, 1, 1, fs) > 0)
	{
		fwrite(&buffer, 1, 1, fd);
	}

	fclose(fs);
	fclose(fd);


}
