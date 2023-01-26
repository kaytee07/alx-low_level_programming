#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free memory occupied by linked list
 * @head: head node of linked list
 */


void free_list(list_t *head)
{
list_t *current;
while ((current = head) != NULL)
{
head = head->next;
free(current->str);
free(current);
}
}
