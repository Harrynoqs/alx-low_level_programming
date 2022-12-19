#include "main.h"

/**
* print_rev - Print string in reverse
*@s: Pointer to string
*Return: Void
*/
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

