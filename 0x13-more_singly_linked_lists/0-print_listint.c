#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *print_listint - Print every element
  *@h: pointer to listint_t
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
