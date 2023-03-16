#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - return the length of a doubly linked list
 * @h: head of the doubly linked list
 * Return: number of nodes in tghe linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *node;
int num_of_nodes = 0;

if (h == NULL)
return (0);
node = h;
while (node != NULL)
{
num_of_nodes++;
node = node->next;
}

return (num_of_nodes);
}
