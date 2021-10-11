#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table.
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *current, *temp;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current != NULL)
        {
            free(current->key);
            free(current->value);
            temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(ht->array);
    free(ht);
}
