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
 * add_node - adds a node to the list
 * @head: pointer to the head of the linked list
 * @str: content of the node to be copied
 * Return: a pointer to a new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *strcopy;
	int i = 0;

	new_node = malloc(sizeof(list_t));

	if (head == NULL || !str || !new_node)
	{
		return (NULL);
	}

	strcopy = malloc((sizeof(char)) * (length(str) + 1));

	if (strcopy == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		strcopy[i] = str[i];
		i++;
	}
	strcopy[i] = '\0';

	new_node->len = (i);
	new_node->str = strcopy;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
