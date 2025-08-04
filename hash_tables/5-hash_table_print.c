#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *hash_table_print - Print the hash table
 *@ht: Hash Table
 *Return: ...nada jaja xd lol
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (first == 0)
			{
				printf(",");
			}

			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
