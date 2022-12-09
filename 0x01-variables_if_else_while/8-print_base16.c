#include <stdio.h>


/**
 *main - print all the numbers of base 16 in lower case
 *
 *Return: 0 means vode successfully runned
 */

int main(void)
{
int num;
for (num = 0 ; num < 10 ; num++)
putchar(num + '0');
for (num = 'a' ; num <= 'f' ; num++)
putchar(num);
putchar('\n');
return (0);
}
