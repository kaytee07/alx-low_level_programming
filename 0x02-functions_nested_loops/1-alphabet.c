#include <stdio.h>
#include "_putchar.h"
/**
 * print_alphabet - print lowercase a to z
 *
 */

void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}

/**
 * main - calls print_alphabet function
 *
 *Return: 0
 */

int main(void)
{
print_alphabet();
return (0);
}
