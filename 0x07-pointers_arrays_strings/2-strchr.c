#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: pointer to string
* @c: character to be located
* Return: Pointer to the first occurrence of the character c
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		s++;
	else
		return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

