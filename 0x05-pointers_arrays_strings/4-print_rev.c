#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * print_rev - reverse a string
 * @s: first parameter
 *
 *
 *
 */

void print_rev(char *s)
{
char reverse[strlen(s)];
int i;
for (i = strlen(s) ; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

