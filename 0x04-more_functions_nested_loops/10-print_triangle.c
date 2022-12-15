#include "main.h"
#include <stdio.h>



/**
 * print_triangle - function print triangle
 * @size: first parameter
 */

void print_triangle(int size)
{
if(size <= 0)
{
_putchar('\n');
}
else
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
_putchar('#');
k--;
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}

