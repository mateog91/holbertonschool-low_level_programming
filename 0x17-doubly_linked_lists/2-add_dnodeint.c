#include "lists.h"
/**
 * add_dnodeint - Add node at start of list
 * @head: head of list
 * @n: number in list
 *
 * Return: Pointer to new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	/* Set new node's values */
	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	/* Set previous first values "prev" to new node*/
	if (*head != NULL)
		(*head)->prev = new;

	/* Set head to first node */
	*head = new;

	return (new);
}
