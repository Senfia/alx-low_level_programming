#include "hash_tables.h"
/**
 * hash_table_set - hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value:  value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *current;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		current = ht->array[index];
		for (; current; current = current->next)
		{
			if (strcmp(current->key, (char *)key) == 0)
			{
				free(current->value);
				current->value = (char *)strdup(value);
				return (1);
			}
		}

	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);

	temp->key = (char *)strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = (char *)strdup(value);
	if (temp->value == NULL)
	{
		free(temp->key);
		free(temp);
		return (0);
	}
	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);
}
