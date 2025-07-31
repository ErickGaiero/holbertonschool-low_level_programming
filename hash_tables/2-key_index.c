#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *key_index - Return the index of a array
 *@key: Key
 *@size: Size of array
 *Return: Index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

return (hash_value % size);
}
