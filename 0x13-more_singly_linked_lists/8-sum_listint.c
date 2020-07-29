#include "lists.h"
/**
 * sum_listint - returns the sum of the date in linked list
 * @head: pointer to the list
 * Return: int sum of data
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while(head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
