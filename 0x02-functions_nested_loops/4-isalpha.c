#include <ctype.h>
#include "main.h"

/**
 *_isalpha - return 1 if it's an alphabet and 0 if otherwise
 *@c: accept only letters
 *
 *Return: 0 if it's an alphabet and 1 if otherwise
 */


int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
