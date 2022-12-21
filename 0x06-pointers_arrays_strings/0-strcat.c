#include "main.h"

/**
* _strcat - concatenate strings
* @dest: first string pointer
* @src: 2nd string pointer
* Return: a pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

