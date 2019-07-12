/*		TITLE: sort and find medians
		AUTHOR: Shubham Kumar Singh
		DATE: Thu june 13 15:50:58 IST 2019
		DESCRIPTION: Input: the two arrays with size
			     Output: Print the sorted array and medians.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clr scr
	system("clear");

	//declare vars
	int n, n1, i, j;
       	float m1, m2, avg;

	//pompt + read
	printf("Enter the size of first array\n");
	scanf("%d", &n);

	printf("Enter the size of second array\n");
	scanf("%d", &n1);

	int arr[n], arr1[n1];
	
	printf("Enter the first array elements\n");
	for(i = 0; i < n;i++)
	{
		scanf("%d", &arr[i]);
	}	
	printf("Enter the second array elements\n");
	for(i = 0; i < n1;i++)
	{
		scanf("%d", &arr1[i]);
	}

	//sort 1st array
	for (j = 0;j < n-1;j++)
	{
		for(i = 0;i < n-j-1;i++)
		{	
			int temp=0;
			if (arr[i] > arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	//sort second array
	for (j = 0;j < n1-1;j++)
	{
		for(i = 0;i < n1-j-1;i++)
		{	
			int temp1;
			if (arr1[i] > arr1[i+1])
			{
				temp1 = arr1[i];
				arr1[i] = arr1[i + 1];
				arr1[i + 1] = temp1;
			}
		}
	}

	//print sorted array
	printf("the sorted array1 is\n");
	for(i = 0;i < n;i++)
	{
		printf("%d\t", arr[i]);
	}

	printf("\n");
	printf("the sorted array2 is\n");
	for(i = 0;i < n1;i++)
	{
		printf("%d\t", arr1[i]);
	}
	printf("\n");
	//median arr1
	if(n % 2)
	{
		m1 = arr[n / 2];
		printf("median of arr1 is %f\n", m1);
	}
	else
	{
		m1 =(float)((float)(arr[n / 2] + arr[(n / 2) - 1]) / 2);
		printf("median of arr1 is %f\n", m1);
	}
	//median arr2
	if(n1 % 2)
	{
		m2 = arr1[n1 / 2];
		printf("median of arr1 is %f\n", m2);
	}
	else
	{
		m2 =(float)((float)(arr1[n1 / 2] + arr1[(n1 / 2) - 1]) / 2);
		printf("median of arr2 is %f\n", m2);
	}
	avg = (m1 + m2) / 2;
	printf("The avg of the medians is %f: ", avg);


return 0;
}
