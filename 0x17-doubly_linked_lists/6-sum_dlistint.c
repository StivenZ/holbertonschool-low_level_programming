#include "lists.h"
/**
 * sum_dlistint - adds values in linked list
 * @head: ptr to dblinkedlist
 * Return: result
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int res = 0;

	while (tmp)
	{
		res = res + tmp->n;
		tmp = tmp->next;
	}
	return (res);
}
