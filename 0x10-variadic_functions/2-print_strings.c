#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - Print n strings
*@separator: is the string to be printed between numbers
*@n: number of strings to be printed
*Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *args;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(ap, char*);
		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ap);
}
