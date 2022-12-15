#include "main.h"

/**
 * _islower - determines if a char is lowercase or not
 * @c: is ASCII character
 *
 * Description: compares int value of char with ASCII value
 * Return: 1 if char is lowercase. 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
