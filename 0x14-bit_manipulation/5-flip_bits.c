#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - flip bits to get to another number
  * @n: first number
  * @m: second number
  * Return: number of bits you would need to flip to get from n to m
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0, count = 0;

	flip = n ^ m;
	while (flip)
	{
		if (flip & 1)
			count++;

		flip >>= 1;
	}

	return (count);
}
