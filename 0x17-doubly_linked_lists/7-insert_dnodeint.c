#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head node of the doubly linked list
 * @idx: Index of the position to insert the new node
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current_node = *h;
unsigned int i = 0;
if (!h)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->prev = NULL;
new_node->next = current_node;

if (current_node)
current_node->prev = new_node;

*h = new_node;
return (new_node);
}

for (; current_node && i < idx - 1; i++)
current_node = current_node->next;

if (!current_node)
{
free(new_node);
return (NULL);
}

new_node->prev = current_node;
new_node->next = current_node->next;

if (current_node->next)
current_node->next->prev = new_node;

current_node->next = new_node;

return (new_node);
}
