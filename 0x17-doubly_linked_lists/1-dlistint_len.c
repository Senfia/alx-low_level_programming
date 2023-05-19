#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a linked list.
 * @h: Pointer to the first element of the list.
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h; h = h->next)
		++i;

	return (i);
}
