#include "holberton.h"
/**
 * *_realloc - reallocates memory using malloc and free
 * @ptr: first pointer
 * @old_size: bytes from pointer ptr
 * @new_size: byte of the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	char *ptr2;

	i = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (!ptr)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return (NULL);
	}
	
	ptr2 = malloc(new_size);

	while (ptr && (i < new_size))
	{
		ptr2[i] = ptr[i];
		i++
	}
	free(ptr);
}
