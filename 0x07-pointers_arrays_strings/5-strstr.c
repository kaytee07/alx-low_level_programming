#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string to find substring in
 * @needle: string to search within haystack
 * Return: pointer of first char of match
 *
 */

while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n != '\0' && *haystack == *n)
{
haystack++;
n++;
}
if (!*n)
{
return (h);
}
haystack++;
}
return ('\0');
}

