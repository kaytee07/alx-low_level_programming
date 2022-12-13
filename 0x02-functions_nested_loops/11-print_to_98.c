#include "main.h"

/**
 *
 *
 *
 *
 */

void print_to_98(int n)
{
while (n < 99)
{
_putchar(n);
if (n < 98)
{
_putchar(',');
_putchar(' ');
}
 n++;
}
_putchar('\n');
}


