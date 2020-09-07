#include "lists.h"
/**
 * free_listint - Frees a list
 * @head: pointer to the head of the list
*/
void free_listint(listint_t *head)
{
	listint_t *temp1, *temp2;

	temp1 = temp2 = head;

	while (temp2 != NULL)
	{
		temp2 = temp2->next;
		free(temp1);
		temp1 = temp2;
	}
}
