#include "main.h"

/**
  *print_binary - Print in binary
  *@n: int to convert to binary
  *Return: nothing
  */
void print_binary(unsigned long int n)
{
	unsigned long int y;
	int i;

	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	y = n;
	i = 0;

	while (y)
	{
		y >>= 1;
		i++;
	}
	i--;

	while (i >= 0)
	{

		y = n;
		y >>= i;
		if (y & 1)
			_putchar (1 + '0');
		else
			_putchar (0 + '0');

		y >>= 1;
		i--;
	}
}
