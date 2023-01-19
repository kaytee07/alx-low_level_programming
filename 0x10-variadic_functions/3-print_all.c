#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - print anything passed
 * @format: this is the data type of the argument to be printed out
 * @...: argument to be printed out
 *
 */

void print_all(const char * const format, ...)
{
int i = 0;
char *separator = "";
va_list args;
va_start(args, format);
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
if (va_arg(args, char*) == NULL)
{
printf("%s(nil)", separator);
}
else
{
printf("%s%s", separator, va_arg(args, char*));
}
break;
default:
break;
}
separator = ", ";
i++;
}
printf("\n");
va_end(args);
}
