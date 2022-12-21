#include "main.h"

/**
* _strcmp - compare strings
* harry
* @s1: pointer to sting 1
* @s2: pointer to string 2
* Return: -15, 15 and 0, if less, greater or equal to
*/
int _strcmp(char *s1, char *s2)
{
	int cmp = 0, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}
	}
	return (cmp);
}

