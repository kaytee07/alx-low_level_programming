#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees all memory in a dlinked list
 * @head: head of doubly linked list
 * Return: nothing
 *
 */


void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
while (current != NULL)
{
head = head->next;
free(current);
current = head;
}
}
