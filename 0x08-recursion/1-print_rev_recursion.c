#include "main.h"

/**
*prints a string in reverse
*@s: string pointer
* Return: Void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

