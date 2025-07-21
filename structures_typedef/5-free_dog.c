#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_dog - Free memory
  * @d: Pointer to struct
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
