#include <stdio.h>
#include "main.h"


/**
 * _puts_recursion - print a string with recursion
 * @s: string to be printed
 * Return: void
 *
 */

void _puts_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
putchar('\n');
return;
}
_putchar(s[i]);
_puts_recursion(s + 1);
}
