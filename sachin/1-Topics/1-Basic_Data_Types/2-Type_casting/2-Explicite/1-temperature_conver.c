//temperature convertion fahrenheit to celsius

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declaration and variable to the entered temp
	int f;
	float cels;

	//prompt the user to enter the fahrenhit
	printf("Enter the Fahrenhit: ");
	//read the number + store the value in f
	scanf("\n%d", &f);

	//logical part fo convertion of F to C
	cels = 0.5556f * (f - 32);
    
    // print the temp in celsis
	printf("temp in cels: %f", cels);
	
}
