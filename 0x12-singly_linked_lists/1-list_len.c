#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * list_len - print the lenght of the linked list
 * @h: linked list to be traversed
 * Return: lenght of list
 */

size_t list_len(const list_t *h)
{
int i = 0;
if (h == NULL)
return (0);

while (h->next != NULL)
{
i++;
h = h->next;
}
i++;
return (i);
}



