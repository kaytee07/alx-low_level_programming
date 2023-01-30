#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - singly linked list
 * head: head of linked list
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *current, *next;

prev = NULL;
current = *head;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;
return (*head);
}

