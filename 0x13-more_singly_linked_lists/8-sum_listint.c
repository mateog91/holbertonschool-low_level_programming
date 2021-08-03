#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: Pointer to first element of list
 *
 * Return:
 * sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	/* Base Case */
	if (head == NULL)
		return (0);

	/* Recursive Case */
	return ((head->n) + (sum_listint(head->next)));
}
