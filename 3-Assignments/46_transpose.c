#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear screen
	system("clear");

	//declare vars
	int **m2, **m1, **prod;
	int row1, col1, n, i, j, k;

	//prompt + read user
	printf("Enter the dimension row and col\n");
	scanf("%d%d", &row1, &col1);

	//dynamic allocation
	m1 = (int **)malloc(row1 * sizeof(int*));
	for(i = 0;i < row1;i++)
	{
		m1[i] = (int *)malloc(col1 * sizeof(int));
	}
	m2 = (int **)malloc(col1 * sizeof(int*));
	for(i = 0;i < col1;i++)
	{
		m2[i] = (int *)malloc(row1 * sizeof(int));
	}
	prod = (int **)malloc(row1 * sizeof(int*));
	for(i = 0;i < row1;i++)
	{
		prod[i] = (int *)malloc(row1 * sizeof(int));
	}
	
//	int m1[row1][col1];
	//read the matrix
	printf("Enter the matrix elements\n");
	for(i = 0;i < row1;i++)
	{
		for(j = 0;j < col1;j++)
		{
			printf("Enter the [%d][%d]th element", i, j);
			scanf("%d", (*(m1+i)+j));
		}
	}

	for(i = 0;i < row1;i++)
	{
		for(j = 0;j < col1;j++)
		{
			printf("%d\t", *(*(m1+i)+j));
		}
		printf("\n");
	}
	printf("\n");

//	int m2[col1][row1];
	for(i = 0;i < col1;i++)
	{
		for(j = 0;j < row1;j++)
		{
			*(*(m2+i)+j) = *(*(m1+j)+i);
			//printf("%d\t", *(*(m1+j)+i));
		}
		printf("\n");
	}

	for(i = 0;i < col1;i++)
	{
		for(j = 0;j < row1;j++)
		{
			printf("%d\t", *(*(m2+j)+i));
		}
		printf("\n");
	}
//	int prod[row1][row1];
	int sum = 0; 
	for(i = 0;i < row1;i++)
	{
		for(j = 0;j < row1;j++)
		{
			*(*(prod + i) + j) = 0;
			for(k = 0;k < col1;k++)
			{
				*(*(prod + i) + j) = *(*(prod + i) + j) + ((*(*(m1 + i) + k)) * (*(*(m2 + k) + j)));
			}
			// = sum;
			//sum = 0;
		}
	}
	printf("the product is\n");
	for(i = 0;i < row1;i++)
	{
		for(j = 0;j < row1;j++)
		{
			printf("%d\t", *(*(prod + i) + j));
		}
		printf("\n");
	}

}
