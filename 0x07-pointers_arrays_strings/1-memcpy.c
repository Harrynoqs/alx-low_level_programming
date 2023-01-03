#include "main.h"

/**
* _memcpy - copy contents of src to dest
* @src: string pointer
* @dest: string destination pointer
* @n: bytes of the memory
* Return: Pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

