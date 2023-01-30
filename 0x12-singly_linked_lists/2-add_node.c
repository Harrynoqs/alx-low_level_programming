#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen - returns the length of a string
* @s: the string whose length to return
* Return: the length of the string
*/
int _strlen(const char *s)
{
		int i = 0;

		while (s[i] != '\0')
		i++;

		return (i);
}



/**
  *add_node- adds node to the beginning
  *@str: pointer tostring to be copied
  *@head: pointer to head node
  *Return: Address of the new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
