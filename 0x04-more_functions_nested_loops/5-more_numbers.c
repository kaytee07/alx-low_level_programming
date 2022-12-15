#include "main.h"
#include <stdio.h>


/**
 * printnum - print lon integers with putchar
 * @n: first argument for printnum
 */


void printnum(int n)
{
if (n / 10 != 0)
printnum(n / 10);
_putchar((n % 10) + '0');
}


/**
 * more_numbers - print 1 - 14, 10 times
 *
 *
 */

void more_numbers(void)
{
int i;
int j;
for (i = 0 ; i <= 10 ; i++)
{
for (j = 0; j <= 14 ; j++)
{
if (j > 9)
{
printnum(j);
}
else
{
_putchar(j + '0');
}
}
_putchar('\n');
}
}

