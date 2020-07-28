#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the head of the list
 * @n: input to the list argument
 * Return: pointer to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	temp = *head;

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
