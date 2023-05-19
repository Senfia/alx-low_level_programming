#include "lists.h"

/**
 * sum_dlistint - Sums all values in a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: The sum of all values in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
