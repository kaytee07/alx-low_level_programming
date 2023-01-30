#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add node to the beginning of a linked list
 * @head: address to head of linked list
 * @n: values to add to the attachd node
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
new->n = n;
new->next = *head;
*head = new;

return (*head);
}
