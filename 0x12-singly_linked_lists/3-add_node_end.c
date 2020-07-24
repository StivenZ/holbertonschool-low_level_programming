#include "lists.h"
/**
 * length - Calculates string length
 * @str: string pointer
 * Return: i: length
 */
int length(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - adds a node to the end of the list
 * @head: pointer to the head of the list
 * @str: string to pass to the node data
 * Return: address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end_node;
	char *strcopy;
	int len = length(str);

	new_end_node = malloc((sizeof(list_t)) * len);
	if (new_end_node == NULL)
		return (NULL);

	strcopy = strdup(str);

	new_end_node->str = strcopy;
	new_end_node->len = len;

	if (*head == NULL)
	{
		new_end_node->next = *head;
		*head = new_end_node;
		return (new_end_node);
	}

	while ((*head)->next != NULL)
	{
		new_end_node->next = (*head)->next;
	}
	new_end_node->next = (*head)->next;
	*head = 
	return (new_end_node);
}
