#include "lists.h"
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
