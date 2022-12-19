#include "main.h"

/**
* _strlen - Length of the string
* @s: string pointer
* Return: retuin length of string
*/
int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	return (str);
}

