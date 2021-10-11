#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	/* Go throuh each index of array*/
	for (i = 0; i < ht->size; i++)
	{
		/* Go through each element of bucket list*/
		current = ht->array[i];
		while (current != NULL)
		{
			/* Print each element */
			if (flag == 1)
				printf(", ");
			printf("%s : %s", current->key, current->value);
			current = current->next;
			flag = 1;
		}
	}
	printf("}\n");
}
