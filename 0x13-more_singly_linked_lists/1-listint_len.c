#include "lists.h"
/**
 * listint_len - prints number of elements of a linked list
 * @h: pointer to the head of the list
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t i;

	temp = h;
	i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
