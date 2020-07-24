#include "lists.h"
/**
 * list_len - returns number of elements of a linked list
 * @h: head of the linked list
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
