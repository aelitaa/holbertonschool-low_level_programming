#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  Initialize a variable of type struct dog.
 * struct dog - structure.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
  d->name = name;
  d->age = age;
  d->owner = owner;
}
