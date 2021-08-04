#include "lists.h"

/**
 * function that reverses a listint_t linked list.
 * @head: Pointer to head
 *
 * return:pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next;

	if (head == NULL)
		return (NULL);
	
	while (*head != NULL)
	{
		
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	
	*head = previous;
	return (*head);
}

