#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  *_strlen - find the length of string
  *@s: pointer to string
  *Return: length pf string
  */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *add_node_end - add a node in the end
  *@head: pointer to the first node
  *@str: sting to be copied in the last node
  *Return: pointer to the last node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = (*head);

	new_node = malloc(sizeof(list_t));
	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		last_node = last_node->next;
		last_node->next = new_node;
	}
		return (new_node);
}
