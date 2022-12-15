#include "main.h"
#include <stdio.h>


/**
 * fizzbuzz - print fizzbuzz for %3 and %5 from 1 to 100
 *
 *
 */

void fizzbuzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
if (i != 100)
putchar(' ');
continue;
}
if (i % 3 == 0)
{
printf("Fizz");
if (i != 100)
putchar(' ');
continue;
}
if (i % 5 == 0)
{
printf("Buzz");
if (i != 100)
putchar(' ');
continue;
}
if (i % 3 != 0 && i % 5 != 5)
{
printf("%d", i);
if (i != 100)
putchar(' ');
}
}
putchar('\n');
}

/**
 * main - call the fizzbuzz function
 * Return: 0 if function runs successfully
 */

int main(void)
{
fizzbuzz();
return (0);
}
