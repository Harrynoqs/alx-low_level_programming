#include "main.h"

/**
* checker - helper function
* @a: integer for square root value
* @n: integer to determine square root
* Return: value of square root
*/
int checker(int a, int n)
{
	if (a * a == n)
	{
		return (a);
	}

	if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (checker(a + 1, n));
	}
}

/**
* _sqrt_recursion - Find the square root of a number
* @n: square root integer
* Return: square root of a number(n)
*/

int _sqrt_recursion(int n)
{
		return (checker(1, n));
}

