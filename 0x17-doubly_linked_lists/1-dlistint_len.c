#include "lists.h"
/**
 * dlistint_len - goes through a list
 * @h: pointer to the head of the list
 * Return: number of elements of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *tmp;
    size_t i;

    tmp = h;
    i = 0;

    while (tmp)
    {
        i++;
        tmp = tmp->next;
    }

    return(i);

}
