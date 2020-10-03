#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value
 * @ht: head of the array
 * @key: key
 * Return: value of the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int i = 0;
    hash_node_t *tmp = NULL;

    if (!ht ||!key)
        return (NULL);

    i = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[i];

    while (tmp)
    {
        if (strcmp(key, tmp->key) == 0)
            return (aux-value);
        tmp = tmp->next;
    }

    return (NULL);
}
