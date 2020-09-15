#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of the linked list
 * @head: double pointer to the head of the list
 * @n: element to add in the node
 * Return: address of the new element or NULL of failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if (*head)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;

	return (new_node);
}
