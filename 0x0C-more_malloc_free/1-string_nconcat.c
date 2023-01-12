#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenate string according number specified
 * @s1: string to receive another string
 * @s2: string to be added to another string
 * @n: number of characters from s2 to concatenate to s1
 * Return: pointer to dynamic memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
char *result;
if (n >= len2)
{
result = (char *) malloc(len1 + len2 + 1);
}
else
{
result = (char *) malloc(len1 + n + 1);
}
if (result == NULL)
{
return (NULL);
}

strcpy(result, s1);
if (n >= len2)
{
strcat(result, s2);
}
else
{
strncat(result, s2, n);
}

return (result);
}


