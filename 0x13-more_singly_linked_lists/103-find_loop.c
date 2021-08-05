#include "lists.h"

/**
 * find_listint_loop -  function that finds the loop in a linked list.
 * @head: - Pointer to first node
 *
 * Description:
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 *
 * Return:
 * The address of the node where the loop starts
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL || head->next == NULL)
		return (NULL);
	slow = slow->next;
	fast = fast->next->next;
	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
			break;
		slow = slow->next;
		fast = fast->next->next;
	}
	/* If loop exists*/
	if (slow == next)
	{
		/* move slow to head and advance 1 each until their next meet */
		/* at that node is where the loop starts */
		slow = head;
		while (slow->next != fast->next)
		{
			slow = slow->next;
			fast = fast->next;
		}
		return (slow->next);
	}
	/* If no loop was found return NULL */
	return (NULL);
}
