
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void myscanf(const char *,...);

int main()
{
	char ch;
	printf("Enter character: \n");
	myscanf("%c", &ch);
	
	printf("Entered character is %c\n", ch);
	getchar();	
	
	int a;
	printf("Enter an integer \n");
	myscanf("%d", &a);

}

void myscanf(const char * format,...)
{
	va_list ap;
	const char *p = format;
	va_start(ap, format);
	int *ip = NULL;
	char *cp = NULL;
	char buffer[80] = {'\0'};
	while(*p)
	{
		if(*p == '%')
		{
			switch(*++p)
			{
				case 'c':
					cp = va_arg(ap, char *);
					*cp = getchar();
					
					break;
				case 'd':
					fgets(buffer, 10, stdin);
					ip = va_arg(ap, int *);
					*ip = atoi(buffer);
					break;
				
			}
		}
	}
}

