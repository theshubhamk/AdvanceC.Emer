#include <stdio.h>

int main()
{
	int n1,n2;
	char opera;
	printf("enter the first number: ");
	scanf("%d", &n1);
	printf("enter the second number: ");
	scanf("%d", &n2);
	getchar();
    printf("enter the operator: ");
    scanf("%c", &opera);
    int result,flag=0;
    switch (opera)
    {
    	case '+':
				result= n1 + n2;
				break;
    	case '-':
				result= n1 - n2;
				break;
    	case '*':
				result= n1 * n2;
				break;
    	case '/':
				result= n1 / 2;
				break;
		default:
				printf("invalid input try again..");
				flag=1;
   }	
	if (!flag)
	{
	printf("result is: %d \n", result);
	}
}
