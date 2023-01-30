#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - insert node at the nth index
 * @head: head node of the linked list
 * @index: index to insert new node
 * Return: 1 if success and zero if otherwise
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current, *temp;

if (*head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
free(current);
return (1);
}

for (i = 0; current != NULL && i < index - 1; i++)
current = current->next;

if (current == NULL || current->next == NULL)
return (-1);

temp = current->next;
current->next = temp->next;
free(temp);

return (1);
}
