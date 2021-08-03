/**
 * add_nodeint - function that prints all the elements of a listint_t list.
 * @head: Double pointer to head
 * @n: Input integer to store in node.
 *
 * Return: the address of the new element, or NULL if it failed
 */

#include "lists.h"

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
