
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void my_printf(const char *format,...);

int main()
{
	//clear screen
	system("clear");

	//char
	char ch = 'A';
	my_printf("The value of ch: %c\n", ch);

	//for int
	int a = 10;
	my_printf("The value of	a: %d\n", a);

	//for double
	double d = 12.45;
	my_printf("The value of d: %lf\n", d);

	//for float
	float f = 11.22;
	my_printf("The value of f: %f\n", f);

}

void my_printf(const char *format,...)
{
	va_list ap;
	const char *p = format;
	va_start(ap, format);
	char buffer[80] = {'\0'};
	while(*p)
	{
		if(*p == '%')
		{
			switch(*++p)
			{
				case 'c':
				{
					char ch = (char) va_arg(ap, int);
					putchar(ch);
					break;
				}
				case 'd':
				{
					int a = va_arg(ap, int);
					sprintf(buffer, "%d", a);
					puts(buffer);
					break;
				}
				case 'f':
				{
					float f = va_arg(ap, double);
					sprintf(buffer, "%f", f);
					puts(buffer);
					break;					
				}
				case 'l':
				{
					++p;
					double d = va_arg(ap, double);
					sprintf(buffer, "%lf", d);
					puts(buffer);
					break;					
				}
			}
		}
		else
		{
			putchar(*p);
		}
		p++;
	}
	va_end(ap);
}