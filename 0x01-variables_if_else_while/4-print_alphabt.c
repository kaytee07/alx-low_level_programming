#include <stdio.h>

/**
 *main - print the alphabet except for q and e
 *
 *Return: 0 means function runned successfuly
 */

int main(void)
{
char alphaBt;
for (alphaBt = 'a' ; alphaBt <= 'z' ; alphaBt++)
{
if (alphaBt == 'q' || alphaBt == 'e')
{
continue;
}
putchar(alphaBt);
}
putchar('\n');
return (0);
}
