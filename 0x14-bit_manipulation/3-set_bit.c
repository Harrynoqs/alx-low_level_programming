#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at the given index
 * @n: pointer for number
 * @index: index to change bit to 1
 * Return: 1 if worked, -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	m = m << index;

	*n = *n | m;

	return (1);

}
