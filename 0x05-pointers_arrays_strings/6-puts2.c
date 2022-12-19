#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print all strings at even position
 * @str: first parameter
 *
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; ++i)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}

