#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int length;
	unsigned int n = 0;
	int i;
	int x;

	if (b == NULL)
		return (0);

	length = 0;

	while (b[length] != '\0')
	{
		if (!(b[length] == '0' || b[length] == '1'))
			return (0);
		length++;
	}

	x = 0;

	for (i = (length - 1); i >= 0; i--)
	{
		n = n + (b[i] - '0') * (1 << x);
		x++;

	}
	return (n);
}
