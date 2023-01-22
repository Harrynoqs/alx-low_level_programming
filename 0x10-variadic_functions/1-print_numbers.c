#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - Print n numbers
*@separator: is the string to be printed between numbers
*@n: number of numbers to be printed
*Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int p = 0, i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(nums, int);

		printf("%d", p);
/* separator is null don't print and last integer */
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
