#include <stdio.h>

/**
 *main - print the combinations of single digit numbers
 *
 *Return: 0 if function runs successfully
 */

int main(void)
{
int comb;
for (comb = 0 ; comb < 10 ; comb++)
{
putchar(comb + '0');
if (comb < 9){
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
