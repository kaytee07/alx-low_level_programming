#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add node to the end of the linked list
 * @head: head of the liked list
 * @str: str for new node string
 * Return: address to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}
else
{
list_t *temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}
return (new);
}
