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
		if (name == NULL)
		{
			printf("Name: (nil)\n");
			printf("%.1f\n", s->age);
			printf("%s\n", s->owner);
		}
		else if (age == NULL)
		{
			printf("%s\n", s->name);
			printf("age: (nil)\n");
			printf("%s\n", s->owner);
		}
		else if (owner == NULL)
		{
			printf("%s\n", s->name);
			printf("%.1f"; s->age);
			printf("owner: (nil)");
		}
		else
		{
			printf("%s\n", s->name);
			printf("%f\n", s->age);
			printf("%s\n", s->owner);
		}
	}
}
