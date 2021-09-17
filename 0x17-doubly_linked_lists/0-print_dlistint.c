#include "lists.h"

/**
 * print_dlistint - print list
 * @h: Pointer to head of list
 *
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("% i\n", h->n);
		h = h->next;
	}
	return (i);
}
