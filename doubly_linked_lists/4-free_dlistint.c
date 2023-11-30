#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current, *next;

    current = head;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}

