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
	hash_node_t *current;

	if (!ht || !key || value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current && strcmp(current->key, (char *)key) == 0)
	{
		current->value = strdup(value);
		return (1);
	}

	current = NULL;
	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
	{
		return (0);
	}

	current->key = strdup(key);
	current->value = strdup(value);
	current->next = ht->array[index];
	ht->array[index] = current;
	return (1);
}
