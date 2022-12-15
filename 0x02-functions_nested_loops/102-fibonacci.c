#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 * Return: int.
 */

int main(void)
{
	long x = 0;
	long z = 1;
	int n = 0;
	long fib;

	while (n < 50)
	{
		fib = z + x;
		if (n != 49)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
		x = z;
		z = fib;
		n += 1;
	}
	return (0);
}

