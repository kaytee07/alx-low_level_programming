#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum all the data in each node in linked list
 * @head: head of the linked list
 * Return: sum of all the data
 *
 */

int sum_dlistint(dlistint_t *head)
{
int total = 0;
dlistint_t *current_node = head;
if (head == NULL)
return (0);

while (current_node != NULL)
{
total += current_node->n;
current_node = current_node->next;
}

return (total);
}
