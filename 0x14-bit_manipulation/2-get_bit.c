#include "main.h"

/**
 * get_bit - returns the value of a bit at the given index
 * @n: the number to check
 * @index: the index to check the bit
 * Return: value of the bit at @index, -1 if there's an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m = 1;
	unsigned int bit = (sizeof(n) * 8) - 1;

	if (index > bit)
		return (-1);

	m = m << index;

	if (n & m)
		return (1);
	else
		return (0);
}
