#include "lists.h"
void free_listint(listint_t *head);

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Double pointer to head of list
 *
 * Description:
 * function that frees a listint_t list.
 * The function sets the head to NULL
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	/*use previous function to free the list */
	free_listint(*head);

	/* Set head to NULL */
	*head = NULL;
}

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
