#include "lists.h"

/**
 * list_len - function that returns number of elements in a linked list_t list.
 * @h: Pointer to structure
 *
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
