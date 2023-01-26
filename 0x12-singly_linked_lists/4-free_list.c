#include "lists.h"

/**
 * free_list - free memory occupied by linked list
 * @head: head node of linked list
 */


void free_list(list_t *head)
{
list_t *current = head;
list_t *next;

while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
head = NULL;
}

