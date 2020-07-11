#include "holberton.h"
/**
 * *_calloc - allocates memory for an array
 * @nmemb: array; !nmemb = nmemb == 0
 * @size: elements to arrange
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *puntero;
	unsigned int i;

	i = 0;

	if (!nmemb || !size)
		return (NULL);

	puntero = malloc(size * nmemb);

	if (!puntero)
		return (NULL);

	while (i < size * nmemb)
	{
		puntero[i] = 0;
		i++;
	}
	return (puntero);
}
