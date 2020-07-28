#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to be returned
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = head;
	i = 0;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
