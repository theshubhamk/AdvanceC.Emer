/*		TITLE: WAP to implement solution for tower of hanoi 
		AUTHOR: Shubham Kumar Singh
		DATE:Sun Jul  8 17:51:48 IST 2019
		DESCRIPTION: Input: number of disks
			     Output: prints the movement of disks to the rods.
*/
#include <stdio.h>
#include <stdlib.h>

//decare the function
void tower_hanoi(int, char, char, char);
int main()
{
	//clear screen
	system("clear");

	//declare vars
	int n;
	char A, B, C;
	//prompt + read user
	printf("Enter the number of disks\n");
	scanf("%d", &n);
	printf("The movement of disks is as follows:\n");
	tower_hanoi(n, 'A', 'B', 'C');

}

void tower_hanoi(int n, char rod1, char rod2, char temp)
{
	if(n == 1)
	{
		printf("Move Disk 1 from rod %c to rod %c\n", rod1, rod2);
		return;
	}
	tower_hanoi(n-1, rod1, temp, rod2);
	printf("Move disk %d from rod %c to rod %c\n",n ,rod1, rod2 );
	tower_hanoi(n-1, temp, rod2, rod1);
}
