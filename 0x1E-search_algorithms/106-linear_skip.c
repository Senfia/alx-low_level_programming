#include "search_algos.h"
#include <math.h>

/**
 * get_node - return the node at some index in a linked list
 * @list: singly linked list
 * @idx: index, MUST be valid (no idea what to return otherwise)
 * Return: node at index
 */
skiplist_t *get_node(skiplist_t *list, size_t idx)
{
	if (!list)
		return (NULL);

	while (list->index < idx)
	{
		list = list->next;
		if (!list)
			return (NULL);
	}
	return (list);
}

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: ordered singly skip list of integer
 * @value: value to search
 * Return: node at which value is found or -1
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *end, *begin;

	if (!list)
		return (NULL);
	begin = list;
	end = list->express;
	while (end && end->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       end->index, end->n);
		begin = end;
		end = end->express;
	}
	if (end)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       end->index, end->n);
	}
	else
	{
		end = begin;
		while (end->next)
			end = end->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       begin->index, end->index);
	while (begin != end)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       begin->index, begin->n);
		if (begin->n == value)
			return (begin);
		begin = begin->next;
	}
	printf("Value checked at index [%lu] = [%d]\n", begin->index, begin->n);
	if (begin->n == value)
		return (begin);
	return (NULL);
}
