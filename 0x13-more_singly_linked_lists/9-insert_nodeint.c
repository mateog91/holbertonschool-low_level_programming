#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
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
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = idx;

	listint_t *nodeNth;
	listint_t *newNode;

	if (idx == 0)
		return (add_nodeint(head, n));

	nodeNth = get_nodeint_at_index(*head, index - 1);

	if (nodeNth == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = nodeNth->next;

	nodeNth->next = newNode;


	return (newNode);
}
/**
 * add_nodeint - function that prints all the elements of a listint_t list.
 * @head: Double pointer to head
 * @n: Input integer to store in node.
 *
 * Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(int));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
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
