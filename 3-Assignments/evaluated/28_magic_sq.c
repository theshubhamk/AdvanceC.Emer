/*		TITLE: Create a magic square
		AUTHOR: Shubham Kumar Singh
		DATE:Sun Jul  7 17:51:48 IST 2019
		DESCRIPTION: Input: dimension of matrix
			     Output: print magic square.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//clear the screen
	system("clear");
	//declare vars
	int row, col, n, k, dimension;

	//prompt +  read user
	printf("Enter the size of square\n");
	scanf("%d", &dimension);
	n = dimension;
	if((n % 2) == 0)
	{
		printf("enter odd value\n");
		exit(1);
	}
	//declare the array
	int a[n][n];

	row = 0;
	col = (n / 2);
	//count from 1 to n x n 
	for(k = 1;k <= (n*n);k++)
	{
	    *(*(a+row)+col) = k;
	    //if multiple of n then insert below
	    if( (k % n) == 0 )
            {
                row++;
            }
            else
            {
                // boundary for row
                if( row == 0 )
                {
                    row = n - 1;
                }
                else // next jump
                {
                    row--;
                }
                
                // boundary cond. for column 
                if( col == ( n - 1 ) )
                {
                    col = 0;
                }
                else  //next jump
                {
                    col++;
                }
            }
	}

	//print
	for(row = 0;row < n;row++)
	{
		for(col = 0;col < n;col++)
		{
			printf("%d\t", *(*(a+row)+col));
		}
		printf("\n");
	}
}
