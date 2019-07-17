//average of number

#include <stdio.h>

int main()
{
	//declaration and variable to store number entered
	int sum, num, i;
	float avg;

	//prompt the user to enter the number
	printf("Enter the number: ");
	scanf("\n %d", &num);

	//sum of all upto entered num
	for (i = 0,sum = 0; i <= num; i++)
	{
		sum = sum + i;
	}
	//find avg
	avg = (float)sum / num;

	printf("average num: %f", avg);

}
