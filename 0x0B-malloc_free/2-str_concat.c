#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two params passed to function
 * @s1: string to receive other string
 * @s2: string to be concat to s1
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k, l = 0, size;
char *ptr;
if (!s1 || !s2 || s1 == NULL || s2 == NULL)
return (NULL);
while (*(s1 + i) != '\0' || *(s2 + j) != '\0')
{
if (*(s1 + i) != '\0')
i++;
if (*(s2 + j) != '\0')
j++;
}
size = (i + j)+1;
ptr = (char *) malloc(sizeof(char) * size);
for (k = 0; k < i ; k++)
*(ptr + k) = s1[k];
for (; l < j ; l++)
{
*(ptr + k) = s2[l];
k++;
}
if (ptr == NULL)
{
return (NULL);
}

*(ptr + (size)) = '\0';
return (ptr);
}

