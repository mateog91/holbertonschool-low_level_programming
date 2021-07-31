#include "lists.h"
/**
 * free_list - frees lists
 * header: pointer to header
 */
void free_list(list_t *head);
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
