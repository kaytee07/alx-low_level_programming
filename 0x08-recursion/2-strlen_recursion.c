#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - return length of the string
 * @s: string whose length is to be checked
 * Return: character number
 */


int _strlen_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
return (0);
}
return  (_strlen_recursion(s + 1) + 1);
}

