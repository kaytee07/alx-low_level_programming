#include <stdio.h>

/**
 *main - print the all the alphabet in small letters
 *
 *Return: 0 if function runs successfully
 */

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
putchar(ch);
putchar('\n');
return (0);
}
