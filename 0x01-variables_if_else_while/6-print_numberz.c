#include <stdio.h>

/**
 *main - print single digit of base 10 from 0 using putchar
 *
 *
 *Return: 0 if function runs successfully
 */

int main(void)
{
int num;
for (num = 0; num < 10 ; num++)
putchar(num + '0');
putchar('\n');
return (0);
}
