#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything irrespective of datatyoe
 * @format: these are the various data types
 *
 */

void print_all(const char * const format, ...)
{
char *str;
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
str = va_arg(args, char*);
if (str == NULL)
{
printf("%s(nil)", separator);
}
else
{
printf("%s%s", separator, str);
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


