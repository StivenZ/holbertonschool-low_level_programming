#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of the list
 * @idx: index where the node should be added
 * @n: input to the new node
 * Return: pointer to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	if (!head)
		return (NULL);

	temp = *head;
	i = 0;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	while (temp)
	{
		if (i + 1 == idx)
		{
			new_node->n = n;
			new_node->next = temp->next;
			temp->next = new_node;
			break;
		}
		temp = temp->next;
		i++;
	}

	return (new_node);
}
