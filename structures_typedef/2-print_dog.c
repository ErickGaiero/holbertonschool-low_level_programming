#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - Print the info of the dog
 *@d: Pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}

		else
		{
			printf("Name: (nil)\n");
		}

		printf("Age: %.6f\n", d->age);

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
