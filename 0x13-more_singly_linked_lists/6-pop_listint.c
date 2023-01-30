#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - remove head node
 * @head: this is the head of the linked list
 * Return: 0 if head is null and head node if otherwise
 */

int pop_listint(listint_t **head)
{
int first;
listint_t *temp;

if (*head == NULL)
return (0);

first = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (first);
}
