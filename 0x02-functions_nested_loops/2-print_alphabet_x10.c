#include <stdio.h>
#include "_putchar.h"

/**
 * print_alphabet_x10 - print lowercase a to z 10 times
 *
 */

void print_alphabet_x10(void)
{
int i;
int j;

for (j = 0; j <= 10 ; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}

/**
 * main - calls print_alphabet function
 *
 *Return: 0
 */

int main(void)
{
print_alphabet_x10();
return (0);
}
