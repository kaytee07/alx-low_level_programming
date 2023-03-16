#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add node to head of a d linkedlist
 * @head: head of dlinkedlist that will be replaced by new node
 * @n: value contained in linked list
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev =  NULL;

if (*head == NULL)
{
new_node->next = NULL;
*head = new_node;
return (new_node);
}

new_node->next = *head;
(*head)->prev = new_node;
*head = new_node;

return (new_node);
}
