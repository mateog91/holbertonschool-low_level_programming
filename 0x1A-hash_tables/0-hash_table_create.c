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

	/* Check if malloc new_ht fails */
	if (new_ht == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	/* Assign size to new_ht*/
	new_ht->size = size;

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
