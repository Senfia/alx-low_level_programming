#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* list_len - returns the number of elements in list_t
* @h: pointer to type list_t
* Return: number of nodes in list
**/
size_t list_len(const list_t *h)
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
