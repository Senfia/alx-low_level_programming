#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to type listint_t*
* Return: nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	for (; h != NULL; h = h->next)
	{
	printf("%d\n", h->n);
	cnt++;
	}
	return (cnt);
}
