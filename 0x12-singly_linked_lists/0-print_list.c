#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - print elements in a linked list
 * @h: pointer to head first node
 * Return: Number of nodes
 *
 */

size_t print_list(const list_t *h)
{
int i = 0;
if (h == NULL)
return (0);
while (h->next != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
i++;
h = h->next;
}
printf("[%u] %s\n", h->len, h->str);
i++;

return (i);
}

