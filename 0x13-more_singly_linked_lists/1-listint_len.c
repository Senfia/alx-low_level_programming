#include "lists.h"
#include <stdio.h>

/**
* list_len - returns number of elements in list_t
* @h: pointer to type list_t
* Return: number of nodes
**/
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
