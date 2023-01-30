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
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}

return (count);
}
