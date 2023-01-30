#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - print the number of elemrnt in a linked list
 * @h: address to head of linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
int i = 0;
if (h == NULL)
return (0);

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}

