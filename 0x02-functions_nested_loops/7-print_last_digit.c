#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: any integer
 *
 * Description: computes the remainder after dividing n by 10
 * Return: a positive integer
 */

int print_last_digit(long int n)
{
	int l_digit;

	l_digit = n % 10;

	if (l_digit < 0)
		l_digit *= -1;

	_putchar('0' + l_digit);

	return (l_digit);
}

