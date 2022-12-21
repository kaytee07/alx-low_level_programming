#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse an array
 * @a: pointer variable to the array
 * @n: this is the size of array to be reversed
 *
 */

void reverse_array(int *a, int n)
{
int temp, s, e;

s = 0;
e = n - 1;
while (s < e)
{
temp = a[s];
a[s] = a[e];
a[e] = temp;
s++;
e--;
}
}

