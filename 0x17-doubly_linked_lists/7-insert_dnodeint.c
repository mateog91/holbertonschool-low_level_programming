#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position.
 * @head: Pointer to first node
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: New node
 *
 * Return:
 * the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do not add the new
 * node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx,
				     int n)
{
	unsigned int index = idx;
	dlistint_t *current, *new;

	if (head == NULL)
		return (NULL);

	if (*head == NULL || idx == 0)
		return (add_dnodeint(head, n));

	current = get_dnodeint_at_index(*head, index);

	if (current == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current;
	new->prev = current->prev;

	current->prev->next = new;
	current->prev = new;

	return (new);
}
/**
 * get_dnodeint_at_index - function that returns the nth node of a listint_t
 * linked list.
 * @head: Pointer to first node
 * @index: Number of node searched for.
 *
 * Return: Memory location of the nth (index) node searched for
 * if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *currentNode = head;

	/* Search for index or NULL pointer */
	for (count = 0; currentNode != NULL && count < index; count++)
	{
		currentNode = currentNode->next;
	}
	/* check if failed by not finding the index */
	if (currentNode == NULL)
		return (NULL);
	return (currentNode);
}
