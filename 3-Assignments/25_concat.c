/*		TITLE: Write a program to concatenate two files in the third file.
		AUTHOR: Shubham Kumar Singh
		DATE: Tue Jul  2 17:57:21 IST 2019
		DESCRIPTION: Input: Read three file names thru' cmd line.
			     Output: copy the data from both src to dest file.
*/

#include <stdio.h>
#include <stdlib.h>

#define _GNU_SOURCE

void display(FILE *);
void conc(FILE *, FILE *, FILE *);

int main(int argC, char *argV[])
{
	//clear screen
	system("clear");

	//declare file pointers
	FILE *fs1, *fs2, *fd;
	//declare buffer
	char buffer[80] = {'\0'};
	int op;
	char ch;

	//check if the files are present or not
	if(argC == 3)
	{
		op = 1;	
	}
	else if(argC == 2)
	{
		op = 2;
	}
	else if(argC == 1)
	{
		op = 3;
	}
	else if(argC == 4)
	{
		op = 4;
	}

	switch(op)
	{
		case 1:
		{
			fs1 = fopen(argV[1],"r");
			//check if fs is pointing to a non empty file
			if(fs1 == NULL)
			{
				perror(argV[1]);
				exit(1);
			}		
			//open the destination file
			fs2 = fopen(argV[2], "r");
			//check if fd is pointing to non empty destination file
			if(fs2 == NULL)
			{
				perror(argV[2]);
				exit(2);
			}
			//logic for copying from src to dest.
			display(fs1);
			display(fs2);
			getchar();
			break;
		}
		case 2:
		{
			fs1 = fopen(argV[1], "r");
			//check if fd is pointing to non empty destination file
			if(fs1 == NULL)
			{
				perror(argV[1]);
				exit(2);
			}
			display(fs1);	
			break;
		}
		case 3:
		{
			display(stdin);
			break;
		}
		default:
		{
			//open the source file in read mode
			fs1 = fopen(argV[1],"rb");
			//check if fs is pointing to a non empty file
			if(fs1 == NULL)
			{
				perror(argV[1]);
				exit(1);
			}		
			//open the source file2 in read mode
			fs2 = fopen(argV[2], "rb");
			//check if fd is pointing to non empty destination file
			if(fs2 == NULL)
			{
				perror(argV[2]);
				exit(2);
			}
			//open the destination file
			fd = fopen(argV[3], "ab");
			//check validity
			if(fd == NULL)
			{
				perror(argV[2]);
				exit(2);
			}
			conc(fs1, fs2, fd);
		}
	}
	fclose(fd);
	fclose(fs1);
	fclose(fs2);
return 0;
}
//function to display
void display(FILE *fs1)
{
	char ch;
	//logic for copying from src to dest.
	while((ch = fgetc(fs1)) != EOF)
	{
		fputc(ch, stdout);
	}
}
//function to concatenate
void conc(FILE *fs1, FILE *fs2, FILE *fd)
{	
	char buffer[80] = {'\0'};
	//logic for copying from src to dest.
	while(fread(&buffer,1,1,fs1) > 0)
	{
		fwrite(&buffer,1,1,fd);
	}
	while(fread(&buffer,1,1,fs2) > 0)
	{
		fwrite(&buffer,1,1,fd);
	}
}