#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at the index
 * @head: pointer to the head of the list
 * @index: position where the node is going to be deleted
 * Return: 1 if succeded, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i;

	if (!head)
		return (-1);

	temp = temp1 = *head;

	i = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
		
	}
	while (temp)
	{
		if (i + 1 == index)
		{
			temp = temp->next;
			temp1 = temp->next;
			free(temp);
			return (1);
		}
		if (temp->next)
		{
			temp = temp1 = temp->next;
			i++;
		}
		else
			return (-1);
	}
	return (-1);
}
