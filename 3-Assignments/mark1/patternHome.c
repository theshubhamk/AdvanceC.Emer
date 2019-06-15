#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,size,lmt,tmp,tmp1;
	system("clear");
	printf("Enter the size\n");
	scanf("%d", &size);
	lmt=size*3;
	tmp=tmp1=size;

	for(i=0;i<(2*size)+1;i++);
	{
		for(j=0;j<(2*size)+1;j++)
		{
			if((i+j)>=tmp && (i+j)<=tmp1)
			{
				printf("*");
			}
			else
			{
				printf("_ ");
			}
			if(tmp1<lmt)
			{
				tmp1=tmp1+2;
			}
			else
			{
				tmp=tmp+2;
			}
			printf("\n\n");
		}
	}

}
