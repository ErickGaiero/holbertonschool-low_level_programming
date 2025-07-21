#ifndef DOG_H
#define DOG_H

/**
 *struct dog - Astruct that exercise zero
 *@name: Name of the dog
 *@age: Age of dog
 *@owner: Owner of the do
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
