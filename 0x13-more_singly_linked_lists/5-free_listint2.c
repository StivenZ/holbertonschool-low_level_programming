#include "lists.h"
/**
 * free_listint2 - Frees a list
 * @head: double pointer to lists' head
*/
void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head == NULL)
		return (NULL);

	temp1 = temp2 = *head;

	while (temp2 != NULL)
	{
		temp2 = temp2->next;
		free(temp1);
		temp1 = temp2;
	}

	*head = NULL;
}
