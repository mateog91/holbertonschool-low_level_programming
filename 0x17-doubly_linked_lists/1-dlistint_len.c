#include "lists.h"
/**
 * dlistint_len - findes size of list
 * @h: Head of list
 *
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
