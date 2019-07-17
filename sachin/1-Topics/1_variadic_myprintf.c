#include <stdio.h>
#include <stdarg.h>

void my_printf(const char *format, ...);

int main()
{
	char ch = 'A';
	my_printf("The value of ch: %c\n", ch);
	int a = 10;
	my_printf("the value of a: %d\n", a);

}

void my_printf(const char *format, ...)
{
	va_list ap;
	char ch;
	int a;
	char buffer[80] = {'\0'};
	const char *p = format;
	va_start(ap, format);
	
	while(*p)
	{
		if (*p == '%')
		{
			switch (*++p)
			{
				case 'c' :
				ch = (char)va_arg(ap, int);
				putchar (ch);
				break;

				case 'd' :
				a = va_arg(ap, int);
				sprintf(buffer, "%d", a);
				puts(buffer);
				break;
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

