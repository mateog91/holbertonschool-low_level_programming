#include "lists.h"

int listint_t *find_listint_loop(const listint_t *head);
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: Pointer to first element
 *
 * Return: number of nodes in the loop
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loopNode;
	const listint_t *current = head;
	
	size_t count = 0;
	/* find and store loopNode*/
	loopNode = find_listint_loop(head);
	while (current != NULL)
	{
		if (current == loopNode)
		{
			printf("%i\n",current->n);
			return (count++);
		}
		printf("%i\n",current->n);
		current = current->next;
		count++;
	}
	return (count);
}

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


int listint_t *find_listint_loop(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;

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
	if (slow == fast)
	{
		/* move slow to head and advance 1 each until their next meet */
		/* at that node is where the loop starts */
		slow = head;
		while (slow->next != fast->next)
		{
			slow = slow->next;
			fast = fast->next;
		}
		return (fast);
	}
	/* If no loop was found return NULL */
	return (NULL);
}
