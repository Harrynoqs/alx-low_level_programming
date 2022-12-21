#include "main.h"

/**
* _strncpy - copy string
* @dest: string pointer
* @src: string pointer
* @n: limit as to where string should end
* Return: copy a string
* harry
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (; i < n; i++)

		dest[i] = '\0';
	}
	return (dest);
}
