#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of integers
 * @a: first parameter that accept a pointer
 * @b: second parameter that accept a pointer
 *
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}


