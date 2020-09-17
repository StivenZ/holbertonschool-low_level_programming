#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp->next)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	free(tmp);
}
