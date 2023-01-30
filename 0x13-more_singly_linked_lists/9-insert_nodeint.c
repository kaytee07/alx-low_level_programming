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
listint_t *temp, *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

if (*head == NULL)
return (NULL);

temp = *head;
for (i = 0; i < idx - 1; i++)
{
if (temp == NULL && i != idx)
{
return (NULL);
break;
}
temp = temp->next;
}

new->n = n;
new->next = temp->next;
temp->next = new;
return (new);
}
