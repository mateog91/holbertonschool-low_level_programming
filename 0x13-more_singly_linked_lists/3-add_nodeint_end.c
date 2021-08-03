#include "lists.h"

/**
 * listint_t *add_nodeint_end - function that adds a new node at the end of a
 * listint_t list.
 * @head: Double Pointer to head of the list
 * @n: Integer to add in node
 *
 * Return: Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = NULL;
	/* If empty list, means the node we are adding is th first Node*/
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	/* Find last node */
	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	/* Link lastNode to this node to make it the last one*/
	lastNode->next = newNode;

	return (newNode);
}
