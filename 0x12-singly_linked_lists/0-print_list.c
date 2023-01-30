#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
*print_list - print every element in list_t
*@h: pointer to list_t
*Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");

		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
