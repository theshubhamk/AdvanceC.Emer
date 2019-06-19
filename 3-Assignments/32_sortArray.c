/*		TITLE: read n float elements into an array and print the sorted elements.
		AUTHOR: Shubham Kumar Singh
		DATE: Mon Jun  18 12:23:11 IST 2019
		DESCRIPTION: Input: Read size and float elements into array.
			     Output:print the elements after sorting(without modifying and copying it into another array.
*/

#include <stdio.h>
#include <stdlib.h>

int sort(float *,float *);

int main()
{
	//clear screen
	system("clear");

	//declare vars
	int n, i, j;

	//PROMPT + read user
	printf("Enter the size of array\n");
	scanf("%d", &n);

	float A[n];
	printf("Enter the elements of arary\n");
	for(i = 0;i < n;i++)
	{
		scanf("%f", &A[i]);
	}
	//sort 
	for(j = 0;j < n-1;j++)
	{
		for(i = 0;i < n-j-1;i++)
		{
			if(A[i] > A[i + 1])
			{
				//call function to sort
				sort(&A[i], &A[i + 1]);
			}
		}
	}
	printf("the sorted array is\n");
	for(i = 0;i < n;i++)
	{
		printf("%f\n", A[i]);
	}

	return 0;
}
//fucntion to sort using swapping
int sort(float *x, float *y)
{
	float temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

