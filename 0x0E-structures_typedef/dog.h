#ifndef _DOG_H_
#define _DOG_H_

#include <stdlib.h> 

/**
 * struct dog - dog
 * @name: character
 * @age: floating point
 * @owner: owner
 *
 * Description: dog struture
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOG_H_ */
