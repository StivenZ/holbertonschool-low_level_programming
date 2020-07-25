#include "lists.h"
/**
 * free_list - frees a linked list structure
 * @head_ pointer to the list
*/
void free_list(list_t *head)
{
	list_t *temp1, *temp2;

	temp1 = head;
	temp2 = head;

	while (temp1 != NULL)
	{
		temp2 = temp2->next;
		free(temp1->str);
		free(temp1);
		temp1 = temp2;
	}
	free(temp1);
}
