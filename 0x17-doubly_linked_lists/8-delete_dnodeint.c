#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete new node at index
 * @head: head of linked list
 * @index: index to insert new node
 * Return: 1 if new node is deleted or -1 if otherwise
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int current_index = 0;
dlistint_t *current_node = *head;

if (*head == NULL)
return (-1);


while (current_node != NULL)
{
if (current_node->next != NULL && (current_index + 1) == index)
{
dlistint_t *temp = current_node->next->next;
temp->prev = current_node;
current_node->next = temp;
return (1);
}

current_index++;
current_node = current_node->next;
}

return (-1);
}
