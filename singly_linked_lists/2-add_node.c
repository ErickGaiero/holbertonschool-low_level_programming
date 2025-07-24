#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to a pointer to list
 * @str: String to duplicate
 * Return: Address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
