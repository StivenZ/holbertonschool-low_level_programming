#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes the dog struct
 * @d: dog struct
 * @name: name of the dog
 * @owner: dog's master
 * @age: dogs age
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		return;
	}
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
