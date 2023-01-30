#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * printnum - print number
 * @a: number to be printed
 *
 */

void printnum(int a)
{
/* if number is smaller than 0 put a '-' sign */
/* and change number to positive */
if (a < 0)
{
putchar('-');
a = -a;
}

/*recur till uou remove all last didgit*/
if (a / 10)
printnum(a / 10);

/* print the last digit */
putchar(a % 10 + '0');
}


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
printnum(h->n);
h = h->next;
putchar('\n');
i++;
}
return (i);
}
