#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the head of the list
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i;

	temp = h;
	i = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}

	return (i);
}
