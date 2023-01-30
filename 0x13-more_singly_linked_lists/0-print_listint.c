#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * printnum - print digit with putchar
 * @n: digit to print with putchar
 *
 */
void printnum(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}

if (n / 10)
printnum(n / 10);

putchar(n % 10 + '0');
putchar('\n');
}

/**
 * print_listint - print the elements of all nodes
 * @h: address to head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
int i = 0;

while (h != NULL)
{
printnum(h->n);
h = h->next;
i++;
}

return (i);
}
