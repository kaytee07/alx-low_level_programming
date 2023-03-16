#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of dlinkedlist
 * @head: this is the head of the linked list
 * @n: value to be stored in the new node
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *current_node = *head;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

while (current_node->next != NULL)
{
current_node = current_node->next;
}

current_node->next = new_node;
new_node->prev = current_node;
return (new_node);
}
