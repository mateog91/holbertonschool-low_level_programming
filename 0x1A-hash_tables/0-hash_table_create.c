#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of hashtable
 *
 * Return:
 * A pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = malloc(sizeof(hash_table_t) * 1);
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	if (new_ht == NULL)
		return (NULL);

	/* Alocate Table */
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	/* Initialize array nodes */
	for (i = 0; i < size; i++)
	{
		new_ht->array[i] = NULL;
	}
	return (new_ht);
}
