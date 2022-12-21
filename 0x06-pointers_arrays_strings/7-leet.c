#include "main.h"

/**
* leet - change letters for numbers in the internet
* @p: string pointer
* Return: string
*/
char *leet(char *p)
{
	int i = 0, b = 0, q = 5;

	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (p[i])
	{
		while (b < q)
		{
			if (p[i] == r[b] || p[i] - 32 == r[b])
			{
				p[i] = n[b];
			}
			b++;
		}
		i++;
	}
	return (p);
}

