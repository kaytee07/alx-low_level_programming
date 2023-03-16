#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print the element in the dlinkedlist
 * @h: head of the doubly linked list
 * Return: returns the number of nodes in the dlinked list
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *new_node;
int num_of_nodes = 0;
if (h == NULL)
return (0);
new_node = h;

while (new_node != NULL)
{
printf("%d\n", new_node->n);
new_node = new_node->next;
num_of_nodes++;
}

return (num_of_nodes);
}
