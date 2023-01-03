#include "main.h"

/**
* _memset - fill in memory with constant byte
* @s: string pointers
* @b: constant byte
* @n: bytes of the memory
* Return: Pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	return (s);
}

