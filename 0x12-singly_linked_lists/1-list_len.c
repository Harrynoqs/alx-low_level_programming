#include "lists.h"

/**
*list_len - number of elements
*@h: pointer yo list_t
*Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
