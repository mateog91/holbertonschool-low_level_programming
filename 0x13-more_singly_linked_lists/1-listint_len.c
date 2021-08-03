#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list.
 * @h: Pointer to Head
 *
 * Return: The number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	/* Print current int */
	/* printf("%i\n", h->n);*/

	/* base cases */
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);

	/* Recursive case */
	return (1 + listint_len(h->next));

}
