#include "main.h"

/**
* _isupper - check uppercase character
*@c: character
* Return: 1 Uppercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

