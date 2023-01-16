#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: address of struct
 * @name: initialize struct name
 * @age: initialize struct age
 * @owner: initialize struct owner
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
