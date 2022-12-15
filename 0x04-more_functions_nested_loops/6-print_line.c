#include "main.h"
#include <stdio.h>



/**
 * print_line - print the nth number of line
 * @n: first argument
 *
 */

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
_putchar('\n');
}

