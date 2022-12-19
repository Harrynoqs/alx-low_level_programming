#include "main.h"

/**
*_puts - p:rints a string
*@str: String pointer
*Return: void
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);

	_putchar('\n');
}

