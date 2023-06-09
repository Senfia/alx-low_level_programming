#include "hash_tables.h"

/**
* hash_table_print - prints hash table
* @ht: pointer to the hash table
* Return: nothing
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *temp;

	if (ht)
	{
		i = ht->size;
		for (i = ht->size; i > 0; i--)
		{
			if (ht->array[i - 1])
			{
				j = i - 1;
				break;
			}
		}

		printf("{");
		for (i = 0; i <= j; i++)
		{
			if (ht->array[i])
			{
				temp = ht->array[i];
				for (; temp; temp = temp->next)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					if (i < j || (i == j && temp->next))
						printf(", ");
				}
			}
		}
		printf("}\n");
	}
}
