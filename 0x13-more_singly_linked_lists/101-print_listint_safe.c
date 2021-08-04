#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: Pointer to first element
 *
 * Return: number of nodes in the loop
 */
size_t print_listint_safe(const listint_t *head);
{

	/* base cases */
	if (head == NULL)
		return (0);
	/* Print current int */
	printf("%i\n", head->n);

	/* Recursive case */
	return (1 + print_listint(head->next));
}
