#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *n;

    head = NULL;
    n = insert_dnodeint_at_index(&head, 0, 98);
    if (n)
        printf("-> %d\n", n->n);
    else
        printf("(nil)\n");
    print_dlistint(head);
    return (0);
}