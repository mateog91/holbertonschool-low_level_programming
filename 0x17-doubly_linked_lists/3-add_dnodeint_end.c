#include "lists.h"
/**
 * add_dnodeint_end - Add node at end of list
 * @head: head of list
 * @n: number in list
 *
 * Return: Pointer to new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	/* new node creation and assign values */
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		new->prev = last;
		last->next = new;
	}
	return (new);
}
