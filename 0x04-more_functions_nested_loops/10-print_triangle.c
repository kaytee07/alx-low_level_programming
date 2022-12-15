#include "main.h"




/**
 * print_triangle - function print triangle
 * @size: first parameter
 */

void print_triangle(int size)
{
int j;
int i;
int k;
for (i = 1; i <= size; i++)
{
k = i;
for (j = 1; j <= size; j++)
{
if (k && j > size - k)
{
putchar('#');
k--;
}
else
{
putchar(' ');
}
}
_putchar('\n');
}
}


