#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: unsigned long int
 * Return: always success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}
