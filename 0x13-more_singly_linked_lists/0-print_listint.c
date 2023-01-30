#include <stdio.h>
#include <stdlib.h>
#include "lists.h"



/**
 * print_listint - print the elements of all nodes
 * @h: address to head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
int i = 0;
if (h == NULL)
return (0);

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
