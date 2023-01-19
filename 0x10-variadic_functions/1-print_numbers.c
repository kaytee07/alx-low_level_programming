#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with a separator
 * @separator: this is printed after every nymber except the last
 * @n: this is the number of argument passed
 * @...: list of argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
int number = va_arg(args, int);
printf("%d", number);

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}




