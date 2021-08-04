#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int pop_listint(listint_t **head);

/**
 * delete_nodeint_at_index - unction that deletes the node at index index of a
 * listint_t linked list.
 * @head: Double pointer to first element of the list
 * @index: Number of node to delete
 *
 * Return:
 * -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int pIndex, i;
	listint_t *previous;
	listint_t *current;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	pIndex = index - 1;
	previous = get_nodeint_at_index(*head, pIndex);

	for (i = 0; previous !=NULL && count < pIndex; i++)
		previous = previous->next;


	if (previous == NULL || previous->next == NULL)
		return (-1);

	current = (previous->next)->next;
	free(previous->next);
	previous->next = current;
	return (1);
}

