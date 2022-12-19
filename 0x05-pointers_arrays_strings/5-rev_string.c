#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string that is stored in memory
 * @s: first parameter
 *
 *
 */

void rev_string(char *s)
{
  char reverse[10];  
int i;
int j;
j = 0;
for (i = strlen(s) - 1; i >= 0; i--)
{
reverse[j] = s[i];
j++;
}
reverse[j] = '\0';
strcpy(s, reverse);
}

