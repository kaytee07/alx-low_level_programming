#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at the nth index
 * @head: head node of the linked list
 * @idx: index to insert new node
 * @n: integer to inser in node
 * Return: the new node created
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *current, *new_node;

if (head == NULL)
return (NULL);

current = *head;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (i = 0; current != NULL && i < idx - 1; i++)
current = current->next;

if (current == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
current->next = new_node;

return (new_node);
}




