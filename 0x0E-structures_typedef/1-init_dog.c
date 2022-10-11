#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - dog initialising
 * @d: structure pointer
 * @name: member pointer
 * @age: member int
 * @owner: member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *s;

	if (d == NULL || name == NULL || age == 0 || owner == NULL)
	{
		exit(0);
	}
	else
	{
		s = d;
		s->name = name;
		s->age = age;
		s->owner = owner;
	}
}
