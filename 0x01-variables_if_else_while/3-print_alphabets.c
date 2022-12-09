#include <stdio.h>
#include <ctype.h>

/**
 *main - print all the aphabet in uppercase and lowercase
 *
 *
 *Return: 0 if function runs successfully
 */
int main(void)
{
char alphaBet;
for (alphaBet = 'a' ; alphaBet <= 'z' ; alphaBet++)
putchar(alphaBet);
for (alphaBet = 'a' ; alphaBet <= 'z' ; alphaBet++)
putchar(toupper(alphaBet));
putchar('\n');
return (0);
}
