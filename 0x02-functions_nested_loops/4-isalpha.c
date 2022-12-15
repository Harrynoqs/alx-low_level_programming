#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 * @c: is an ASCII character
 *
 * Description: looks for c in the alphabet range of ASCII
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

