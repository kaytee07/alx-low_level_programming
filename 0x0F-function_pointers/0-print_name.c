#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name either as it is or in caps
 * @name: name to be printed out
 * @f: callback function
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}

