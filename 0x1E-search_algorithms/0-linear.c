#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array == NULL)
        return (-1);

    while (i < size)
    {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (value == array[i])
            return (i);
        i++;
    }
    return (-1);
}
