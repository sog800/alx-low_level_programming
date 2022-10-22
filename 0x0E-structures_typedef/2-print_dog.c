#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print a structure
 * @d: struct pointer
 */
void print_dog(struct dog *d)
{	
	if (d == NULL)
	{
		exit(0);
	}
	else
	{
		if (d->name == NULL && d->owner != NULL)
		{
			printf("Name: (nil)\nAge: %.1f\nOwner: %s\n", d->age, d->owner);
		}
		else if (d->name == NULL && d->owner == NULL)
		{
			printf("Name: (nil)\nAge: %.1f\nOwner: (nil)", d->age);
		}
		else if (d->name != NULL && d->owner == NULL)
		{
			printf("Name: %s\nAge: %.1f\nOwner: (nil)\n", d->name, d->age);
		}
		else
		{
			printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
