/*		TITLE: Write a program to concatenate two files in the third file.
		AUTHOR: Shubham Kumar Singh
		DATE: Tue Jul  2 17:57:21 IST 2019
		DESCRIPTION: Input: Read three file names thru' cmd line.
			     Output: copy the data from both src to dest file.
*/

#include <stdio.h>
#include <stdlib.h>

#define _GNU_SOURCE

int main(int argC, char *argV[])
{
	//clear screen
	system("clear");

	//declare file pointers
	FILE *fs1, *fs2, *fd;
	//declare buffer
	char buffer;
	int op;
	char ch;

	//check if the files are present or not
	if(argV[3] == NULL)
	{
		op = 1;	
	}
	else if((argV[3] == NULL) && (argV[2] == NULL))
	{
		op = 2;
	}
	else if((argV[3] == NULL) && (argV[2] == NULL) && (argV[1] == NULL))
	{
		op = 3;
	}
	else
	{
		op = 4;
	}

	switch(op)
	{
		case 1:
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
			while((ch = fgetc(fs1)) != EOF)
			{
				fputc(ch, stdout);
			}
			while((ch = fgetc(fs2)) != EOF)
			{
				fputc(ch, stdout);
			}
			break;
		case 2:
			fs1 = fopen(argV[1], "r");
			//check if fd is pointing to non empty destination file
		//	if(fs1 == NULL)
		//	{
		//		perror(argV[1]);
		//		exit(2);
		//	}
			//logic for copying from src to dest.
			while((ch = fgetc(fs1)) != EOF)
			{
				fputc(ch, stdout);
			}
			break;
	/*	case 3:
			while((ch = fgetc(stdin) != EOF)
			{	
				fputc(ch, stdout);
			}
		
			break;
	*/
		default:
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
			//logic for copying from src to dest.
			while(fread(&buffer,1,1,fs1) > 0)
			{
				fwrite(&buffer,1,1,fd);
			}
			while(fread(&buffer,1,1,fs2) > 0)
			{
				fwrite(&buffer,1,1,fd);
			}			
			break;	
	}
	fclose(fd);
	fclose(fs1);
	fclose(fs1);

}

