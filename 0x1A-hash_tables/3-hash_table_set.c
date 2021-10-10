#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *bucket, *current, *new;

	if (ht == NULL || strlen(key) <= 0 || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
		/* search if key is in bucket*/
		if (strcmp(current->key, key) == 0)
		{
			/*remove previous value and replace for new value*/
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
	/* Bucket is empty or does not have key, add node*/
	if (current == NULL)
	{
		new = add_node(&bucket, key, value);
		if (new == NULL)
			return (0);
		return (1);
	}
	printf("something went wrong");
	return (0);
}

/**
 * add_node - adds new node at the begining of bucketlist
 *
 * @head: First element of bucket list
 * @key: key to check if exists or add
 * @value: value to add or replace
 *
 * Return: pointer to new node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
