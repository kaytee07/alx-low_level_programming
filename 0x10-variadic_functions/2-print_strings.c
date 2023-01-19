#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print parameters followed by the separator
 * @separator: comes after every parameter printed
 * @n: number of parameters passed
 * @...: argument list to print out
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
char *str = va_arg(args, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
