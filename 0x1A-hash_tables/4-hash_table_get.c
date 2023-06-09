#include "hash_tables.h"

/**
* hash_table_get - gets a value associated with a key
* @ht: hash table to look into
* @key: key to look for
* Return: value associated with the element, or NULLs
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht)
	{
		index = key_index((const unsigned char *)key, ht->size);
		if (ht->array[index])
		{
			temp = ht->array[index];
			for (temp = temp; temp; temp = temp->next)
			{
				if (strcmp(temp->key, (char *)key) == 0)
					return (temp->value);
			}
		}
	}
	return (NULL);
}
