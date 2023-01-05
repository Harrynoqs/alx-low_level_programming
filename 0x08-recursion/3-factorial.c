#include "main.h"

/**
* factorial - Print the factorial of a number
* @n: Integer to calculate it's factorial
* Return: Factorial of Integer
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}

