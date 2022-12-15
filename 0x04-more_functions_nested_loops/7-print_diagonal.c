#include "main.h"
#include <stdio.h>



/**
 * print_diagonal - print the backslash on the nth space
 * @n: first argument
 *
 */

void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 0; j < i; j++)
{
if (j == 0)
{
continue;
}
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

