#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: the numbers of arguments being passed through
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);

}
