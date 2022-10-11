#include "dog.h"
#include "main.h"
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
	
	s = d;
	s -> name = name;
	s -> age = age;
	s -> owner = owner;
}
