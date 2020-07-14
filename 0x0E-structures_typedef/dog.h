#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
/**
 * struct dog - names and owns a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's belongin
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* _HOLBERTON_H_ */
