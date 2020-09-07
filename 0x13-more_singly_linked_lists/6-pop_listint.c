#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the head of the list
 * Return: Head's node data int
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	i = temp->n;
	*head = temp->next;
	free(temp);
	return (i);
}
