
#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print from argument to 98
 *
 *
 *
 */

void print_to_98(int n)
{
int i;
for (i = n ; i < 99 ; i++)
{
printf("%d", i);
if (i <= 97)
printf(", ");
}
_putchar('\n');
}


