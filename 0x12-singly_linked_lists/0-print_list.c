#include "lists.h"
/**
 * print_list - Prints the elements of a list
 * @h: pointer to the list to be printed
 * Return: variable size element
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
			temp = temp->next;
		}

		printf("[%d] %s\n", temp->len, temp->str);
		i++;
		temp = temp->next;
	}
	return (i);
}
