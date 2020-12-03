#include "lists.h"
/**
 * free_dlistint - function that frees a db linked list
 * @head: double pointer to ddlklist
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}