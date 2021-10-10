#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: is key to locate at @index
 * @size: is the size of the array of the hash table
 *
 * Return:
 * Index at which the key/value pair should be stored in the array of
 * the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
