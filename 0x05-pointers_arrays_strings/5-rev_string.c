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
int l, i;
char ch;
for (l = 0; s[l] != '\0'; ++l)
;
for (i = 0; i < l / 2; ++i)
{
ch = s[i];
s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
s[l - 1 - i] = ch;
}

}

