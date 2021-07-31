#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of the list
 * @head: Pointer to first node of the list
 * @str: string to add to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;

	/* Create Pointer structure variables */
	list_t *last_node;
	list_t *new_node;
	/* Allocate node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/* Put in the data */
	/* Calculate length of str */
	for (i = 0; str[i]; i++)
		;
	/* Put in the string */
	new_node->str = strdup(str);
	/* Put in the legth of str in len */
	new_node->len = i;
	/* Adding in last node, make next node empty */
	new_node->next = NULL;
	/*If list is empty then make new node as head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*If not empty list, find last node of list */
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	/* Last node points to the new node */
	last_node->next = new_node;
	return (new_node);
}
