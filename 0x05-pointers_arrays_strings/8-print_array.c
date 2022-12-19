#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - print the element of an array of integers
 * @a: first parameter
 * @n: second parameter
 *
 *
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
putchar(',');
putchar(' ');
}

}
putchar('\n');
}

