#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add node to the beginning of the list
 * @head: address to the beginning of the list
 * @str: string to add to new node string
 * Return: addrss of the new head node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;
return (new);
}
