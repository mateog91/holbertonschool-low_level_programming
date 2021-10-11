#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table.
 * @key: is the key being searched in hash table
 *
 * Return:
 * value associated with the element, or NULL if key couldn’t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || strlen(key) <= 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		/* search if key is in bucket*/
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	/* key value was not found in bucket */
	return (NULL);
}
