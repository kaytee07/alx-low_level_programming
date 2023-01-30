#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free memory space used by linked list
 * @head: the head node of the linked list
 *
 *
 */

void free_listint(listint_t *head)
{
listint_t *temp;
if (head == NULL)
return;

while ((temp = head) != NULL)
{
head = head->next;
free(temp);
}
}

