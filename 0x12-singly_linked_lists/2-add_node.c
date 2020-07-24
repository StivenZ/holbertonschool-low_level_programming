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
	int len;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	len = length(str);

	strcopy = malloc((sizeof(char)) * len);

	if (strcopy == NULL)
	{
		return (NULL);
	}

	strcopy = strdup(str);

	new_node->str = strcopy;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
