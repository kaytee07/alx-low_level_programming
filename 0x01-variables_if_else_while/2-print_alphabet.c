#include <stdio.h>

/**
 *main - print the all the alphabet in small letters
 *
 *Return: 0 if function runs successfully
 */

int main(void)
{
char alphabet;
for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
