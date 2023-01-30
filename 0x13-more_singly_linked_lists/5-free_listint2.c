#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free memory space used and set head to null
 * @head: head node of the linked list
 *
 *
 */

void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;

while ((temp = *head) != NULL)
{
*head = (*head)->next;
free(temp);
}
}
