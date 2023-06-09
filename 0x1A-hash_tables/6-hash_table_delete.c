#include "hash_tables.h"

/**
* hash_table_delete - deletes a given hash table
* @ht: pointer to hash table to delete
* Return: nothing
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			for (; current;)
			{
				temp = current;
				current = current->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = NULL;
			}
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
