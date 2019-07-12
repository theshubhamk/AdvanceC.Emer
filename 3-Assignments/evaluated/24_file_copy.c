/*		TITLE: Write a program to implement my_cp() function.
		AUTHOR: Shubham Kumar Singh
		DATE: Mon Jul  1 17:57:21 IST 2019
		DESCRIPTION: Input: Read two file names thru' cmd line.
			     Output: copy the data from src to dest file.
*/

#include <stdio.h>
#include <stdlib.h>

#define _GNU_SOURCE
void my_copy(FILE *,FILE *);

int main(int argC, char *argV[])
{
	//clear screen
	system("clear");

	//declare file pointers
	FILE *fs, *fd;

	//check if the files are present or not
	if(argV[2] == NULL || argV[1] == NULL)
	{
		printf("error\n");
	}
	//open the source file in read mode
	fs = fopen(argV[1],"rb");
	//check if fs is pointing to a non empty file
	if(fs == NULL)
	{
		perror(argV[1]);
		exit(1);
	}		
	//open the destination file
	fd = fopen(argV[2], "wb");
	//check if fd is pointing to non empty destination file
	if(fd == NULL)
	{
		perror(argV[2]);
		exit(2);
	}
	//logic for copying from src to dest.
	my_copy(fs, fd);
	
	fclose(fd);
	fclose(fs);
}
void my_copy(FILE *fs, FILE *fd)
{
	//declare buffer
	char buffer;
	while(fread(&buffer,1,1,fs) > 0)
	{
		fwrite(&buffer,1,1,fd);
	}
}

