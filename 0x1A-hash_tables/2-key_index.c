#include "hash_tables.h"
/**
 * key_index - returns the index of a key
 * @key: key of the item of the hash table
 * @size: size of the array of the hash table
 * Return: index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
		return (EXIT_FAILURE);

	return (hash_djb2(key) % size);
}
