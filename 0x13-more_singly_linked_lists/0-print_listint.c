#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: Pointer to Head
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{

	/* base cases */
	if (h == NULL)
		return (0);
	/* Print current int */
	printf("%i\n", h->n);

	/* Recursive case */
	return (1 + print_listint(h->next));

}
