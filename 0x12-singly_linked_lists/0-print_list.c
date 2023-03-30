#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to type list_t
* Return: number of nodes in list
**/
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
