#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print a structure
 * @d: struct pointer
 */
void print_dog(struct dog *d)
{
	struct dog *s;

	if (d == NULL)
	{
		exit(0);
	}
	else
	{
		s = d;
		if (s->name == NULL && s->owner != NULL)
		{
			printf("Name: (nil)\nAge: %.1f\nOwner: %s\n", s->age, s->owner);
		}
		else if (s->name == NULL && s->owner == NULL)
		{
			printf("Name: (nil)\nAge: %.1f\nOwner: (nil)", s->age);
		}
		else if (s->name != NULL && s->owner == NULL)
		{
			printf("Name: %s\nAge: %.1f\nOwner: (nil)\n", s->name, s->age);
		}
		else
		{
			printf("Name: %s\nAge: %.1f\nOwner: %s\n", s->name, s->age, s->owner);
		}
	}
}
