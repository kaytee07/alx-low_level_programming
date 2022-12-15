#include "main.h"
#include <stdio.h>



/**
 * print_square - print square followed by a line
 * @size: first argument
 *
 */

void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
else
putchar('\n');
}
