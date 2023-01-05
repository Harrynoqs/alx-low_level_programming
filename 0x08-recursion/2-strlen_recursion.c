#include "main.h"

/**
* _strlen_recursion - Find length of a string
* @s: string pointer
* Return: Interger length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

