#include "hash_tables.h"

/**
* hash_table_create - create a hash table
* @size: size of the table
* Return: pointer to the hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtble;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	hashtble = NULL;
	hashtble = malloc(sizeof(hash_table_t));

	if (hashtble == NULL)
	{
		return (NULL);
	}
	hashtble->array = malloc(sizeof(hash_node_t *) * size);

	if (hashtble->array == NULL)
	{
		free(hashtble);
		return (NULL);
	}
	hashtble->size = size;

	while (i < hashtble->size)
	{
		hashtble->array[i] = NULL;
		i++;
	}

	return (hashtble);
}
