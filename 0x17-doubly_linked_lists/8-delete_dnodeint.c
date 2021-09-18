#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: Fist node
 * @index: is the index of the node, starting from 0
 *
 * Return: Nth node memory address or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}

/**
 * delete_dnodeint_at_index - unction that deletes the node at index index of a
 * listint_t linked list.
 * @head: Double pointer to first element of the list
 * @index: Number of node to delete
 *
 * Return:
 * -1 if it failed, 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL || *head == NULL)
		return (-1);

	current = get_dnodeint_at_index(*head, index);
	/* Index not range of list */
	if (current == NULL)
		return (-1);

	if (current->next == NULL)
	{
		/* Only 1 node in list */
		if (current->prev == NULL)
		{
			*head = current->next;
			free(current);
			return (1);
		}
		/* Last node*/
		{
			current->prev->next = NULL;
			free(current);
			return (1);
		}
	}
	/* Fist node */

	if (current->prev == NULL)
	{
		current->next->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}
	/* node in the middle */
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
