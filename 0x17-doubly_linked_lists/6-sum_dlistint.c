#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - print the sum of elements
 * @head: pointer to the head of the list
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);

}
