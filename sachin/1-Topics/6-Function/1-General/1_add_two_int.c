#include <stdio.h>

//Declare/prototyping/signature of the function
//syntax :return type function_name(parameter_list)
int add(int , int);

//start the main function
int main()
{
	int a, b, sum;

	//prompt + read the input
	printf("enter the two number: ");
	scanf("%d %d", &a, &b);
	//call the function
	sum = add(a, b);

	//print the result
	printf("sum= %d", sum);
}
//define the function
int add(int a, int b)
{
	int temp;
	temp = a + b;
	return temp;
}
