#include "dog.h"
#include <stdlib.h>
/**
 * *_strcpy - copies a string
 * @dest: parameter
 * @src: parameter
 * Return: string
*/
char *_strcpy(char *dest, char *src)
{
int i, j;

i = 0;

	while (src[i++] != '\0')
	{; }

j = 0;

	while (j <= i)
	{
		dest[j] = src[j];
		if (dest[j] == '\0')
		{
			break;
		}
	j++;
	}
return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: a new dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *ncpy, *ocpy;
	int i, j;

	i = 0;
	j = 0;
	while (name[i++])
	{; }
	ncpy = malloc(sizeof(char) * i);
	if (!ncpy)
		return (NULL);
	_strcpy(ncpy, name);

	while (name[j++])
	{; }
	ocpy = malloc(sizeof(char) * j);
	if (!ocpy)
		return (NULL);
	_strcpy(ocpy, owner);

	new = malloc(sizeof(dog_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	(*new).name = name;
	(*new).age = age;
	(*new).owner = owner;

	return (new);
}
