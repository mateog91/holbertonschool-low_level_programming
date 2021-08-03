#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: Pointer to head of list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	/* Base Case: pointer to NULL means last node */
	if (head == NULL)
		return;
	/* Recursive Case */
	/* Free next node */
	free_listint(head->next);
	/* Reaches this point when reaches pointer to Null (last node) */
	free(head);
}
