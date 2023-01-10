#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies string from parameter to a new pointer
 * @str: pointer to string to be copied
 * Return: pointer to copied string
 *
 *
 */


char *_strdup(char *str)
{
int i = 0;
int j = 0;
char *ptr;
if (!str)
{
return (NULL);
}
while (*(str + i) != '\0')
{
i++;
}

ptr = (char *) malloc(sizeof(char) * (i));
for (; j < i; j++)
{
*(ptr + j) = str[j];
}
*(ptr + i) = '\0';
return (ptr);
}

