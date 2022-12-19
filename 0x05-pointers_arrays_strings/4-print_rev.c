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
int i;
for (i = strlen(s) - 1 ; i >= 0 ; i--)
{
putchar(s[i]);
}
putchar('\n');
}

int main(void)
{
    char *str;

    str = "Holberton!";
    print_rev(str);
    return (0);
}
