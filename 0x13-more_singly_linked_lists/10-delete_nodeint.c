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
	int pIndex;
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
	if (previous == NULL || previous->next == NULL)
		return (-1);

	current = (previous->next)->next;
	free(previous->next);
	previous->next = current;
	return (-1);
}

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

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list.
 * @head: Pointer to first node
 * @index: Number of node searched for.
 *
 * Return: Memory location of the nth (index) node searched for
 * if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *currentNode = head;

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
