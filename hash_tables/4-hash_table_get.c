#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *hash_table_get - Retrieves a value associated with a key.
 *@ht: Hash table
 *@key: Key
 *Return: NULL o actual
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *actual;

	if (ht == NULL || key == NULL || ht->array == NULL || ht->size == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	actual = ht->array[index];

	while (actual != NULL)
	{
		if (strcmp(actual->key, key) == 0)
		{
			return (actual->value);
		}
		actual = actual->next;
	}

	return (NULL);
}
