#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: Pointer to first element
 *
 * Return: number of nodes in the loop
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 1;
	const listint_t *current = head, *slow = head, *fast = head;

	if (head == NULL)
		return (0);
	if (head->next == NULL)
	{
		printf("%i\n", head->n);
		return (++count);
	}
	slow = slow->next;
	fast = fast->next->next;
	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
			break;
		slow = slow->next;
		fast = fast->next->next;
	}
	if (slow == fast)
	{
		slow = head;
		while (slow->next != fast->next)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	while (current != NULL)
	{
		if (current == fast)
		{
			printf("%i\n", current->n);
			return (count);
		}
		printf("%i\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
