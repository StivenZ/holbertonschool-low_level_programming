#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the lineked list
 * @head: pointer to the head of the list
 * @n: element of the new list
 * Return: pointer to the new node, or NULL if falied
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *tmp;

    tmp = *head;
    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;
    if (!(*head))
    {
        new_node->prev = *head;
        (*head) = new_node;
        return (new_node);
    }

    while (tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
    new_node->prev = tmp;
    return (new_node);
}