#include "main.h"

/**
 *_abs - computes the absolute value of a number
 * @n: a signed integer
 *
 * Description: Compares n to zero and and always returns positve n
 * Return: a positive n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
		return (n * -1);
}

