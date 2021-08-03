#include "lists.h"
/**
 * pop_listint- function that deletes the head node of a listint_t linked list
 * @head: Double pointer to head of list (first node)
 *
 * Return:
 * The head node’s data (n).
 * If the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	/* If empty list then return 0 */
	if (*head == NULL)
		return (0);

	/* Store current n value */
	n = temp->n;

	/* Store head node in temp */

	/* head point to next node */
	*head = temp->next;

	/* Free pointer to next in current node */
	free(temp);

	return (n);
}
