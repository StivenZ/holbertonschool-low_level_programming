#include "lists.h"
/**
 * print_dlistint - prints elements of a linked list
 * @h: pointer to the list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i;

	i = 0;
	tmp = h;

	if (!h)
	{
		return (EXIT_FAILURE);
	}

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}

	return (i);
}
