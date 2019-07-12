#include <stdio.h>
#include <stdlib.h>

void sort(float *,float *);
void sortedd(int,float *);
void binsearch(float, int, float *);
void sortt(char * arr[], int);

int main()
{
	//clear screen
	system("clear");

	//declare vars
	int n, i, j, op;

	//Prompt + read user
	printf("choose an option 1.int 2.Char 3.float 4.double 5.String\n");
	scanf("%d", &op);

	switch(op)
	{
		case 1:
		{
			//PROMPT + read user
			printf("Enter the size of array\n");
			scanf("%d", &n);

			float A[n];
			float key;
			printf("Enter the elements of arary\n");
			for(i = 0;i < n;i++)
			{
				scanf("%f", &A[i]);
			}
			//sort 
			sortedd(n, A);
			printf("the sorted array is\n");
			for(i = 0;i < n;i++)
			{
				printf("%d\n",(int ) A[i]);
			}
			printf("Enter the key to find\n");
			scanf("%f", &key);
			binsearch(key, n, A);
			break;
		}
		case 3:
		{
			//PROMPT + read user
			printf("Enter the size of array\n");
			scanf("%d", &n);

			float A[n];
			float key;
			printf("Enter the elements of arary\n");
			for(i = 0;i < n;i++)
			{
				scanf("%f", &A[i]);
			}
			//sort 
			sortedd(n, A);
			printf("the sorted array is\n");
			for(i = 0;i < n;i++)
			{
				printf("%f\n", A[i]);
			}
			printf("Enter the key to find\n");
			scanf("%f", &key);
			binsearch(key, n, A);
			break;
		}		
	/*	case 4:
		{
			//PROMPT + read user
			printf("Enter the size of array\n");
			scanf("%d", &n);

			double A[n];
			double key;
			printf("Enter the elements of arary\n");
			for(i = 0;i < n;i++)
			{
				scanf("%lf", &A[i]);
			}
			//sort 
			sortedd(n, A);
			printf("the sorted array is\n");
			for(i = 0;i < n;i++)
			{
				printf("%lf\n", A[i]);
			}
			printf("Enter the key to find\n");
			scanf("%lf", &key);
			binsearch(key, n, A);
			break;
		}
		case 5:
		{
			printf("Enter the size of array\n");
			scanf("%d", &n);
			//declare an array
			char **a;
			//read the names
			printf("Enter the strings\n");
			
			//allocate memory dynamically for names
			char ** const sptr = (char**)malloc(sizeof(char*) * n);

		    if (NULL == sptr) 
			{
		       	printf("Error: Malloc allocation Failure \n");
		       	return 1;
		    }
			for (i = 0; i < n; i++)
		    {	
		       	sptr[i] = (char*)malloc(sizeof(char) * (32+1));
		        
		       	if (NULL == sptr[i]) 
				{
		      		printf("Error: Malloc allocation Failure for Person [%d] \n", i);
	           		return 1;
	        	}
			}
			
			a = sptr;

			for(i = 0;i < n;i++)
			{
				printf("%d\t:",i);
				scanf("%s", a[i]);
				if(strlen(a[i]) > 32)
				{
					printf("error: Enter the name of size < 32\n");
					exit(1);
				}
			}
			
			sortt(a, n);
			printf("sorted array is\n");
			for(i = 0;i < n;i++)
			{
				printf("%d\t:",i);
				printf("%s", a[i]);
				printf("\n");

			}
			char key;
			printf("Enter the key\n");
			scanf("%s", &key);
			binsearchA(key, n, A);

		}*/
	}

	
	

	return 0;
}
void sortedd(int n, float *A)
{
	int i, j;
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
	

}
//fucntion to sort using swapping
void sort(float *x, float *y)
{
	float temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void binsearch(float key, int n, float *A)
{
	int first = 0, last = n - 1;
	int middle = (first + last) / 2 ;

	while(first	< last)
	{
		if(A[middle] < key)
		{
			first = middle + 1;
		}
		else if(A[middle] == key)
		{
			printf("%f found at location %d\n", key, middle + 1);
			break;
		}
		else
		{
			last = middle - 1;
		}
		middle = (first + last) / 2;
	}
	if(first > last)
	{
		printf("key not found\n");
	}
}
/*
void sortt(char * arr[], int n)
{
	char temp[32];
	int i, j;
	for(i = 0;i < n;i++)
	{
		for(j = i + 1;j < n;j++)
		{	
			if((strcmp(*(arr+i),*(arr+j))) > 0)
			{
				strcpy(temp, *(arr+i));
				strcpy(*(arr+i), *(arr+j));
				strcpy(*(arr+j), temp);
			}
		}
	}
}

void binsearchA(char key, int n, char *A)
{
	char first = 0, last = n - 1;
	char middle = (first + last) / 2 ;

	while(first	< last)
	{
		if(A[middle] < key)
		{
			first = middle + 1;
		}
		else if(A[middle] == key)
		{
			printf("%c found at location %c\n", key, middle + 1);
			break;
		}
		else
		{
			last = middle - 1;
		}
		middle = (first + last) / 2;
	}
	if(first > last)
	{
		printf("key not found\n");
	}
}
*/