#include <stdio.h>

/**
 *main - print the all the alphabet in lowercase reverse
 *
 *Return: 0 if function runs successfully
 */

int main(void)
{
char alphabet;
for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
putchar(alphabet);
putchar('\n');
return (0);
}
