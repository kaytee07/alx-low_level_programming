#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a particular index
 * @head: head of dlinked list
 * @index: idex whose node is to be returned
 * Return: node at index
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int head_index = 0;
dlistint_t *current = head;

if (head == NULL)
return (NULL);

while (current != NULL)
{
head_index++;
if (index == head_index - 1)
return (current);
current = current->next;
}

return (NULL);
}
