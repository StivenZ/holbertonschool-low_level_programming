#include "dog.h"
/**
 * *new_dog
 * @name: name of dog
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: a new dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	(*new).name = name;
	(*new).age = age;
	(*new).owner = owner;

	return (new);
}
