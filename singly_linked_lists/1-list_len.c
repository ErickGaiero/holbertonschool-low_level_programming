#include <stddef.h>
#include "lists.h"

/**
 * list_len - Cuenta el número de elementos en una lista list_t.
 * @h: Puntero al primer nodo.
 *
 * Return: Número total de nodos en la lista.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}

	return (count);
}
