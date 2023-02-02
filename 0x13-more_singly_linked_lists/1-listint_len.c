#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *listint_len - Print every element
  *@h: pointer to listint_t
  *Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
