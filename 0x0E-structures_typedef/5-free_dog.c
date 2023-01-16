#include <stdlib.h>
#include <string.h>
#include "dog.h"
#include "main.h"

/**
 * free_dog - free all memory occupied by the struct
 * @d:struct to be freed
 *
 */


void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free(d->name);
free(d->owner);
free(d);
}
