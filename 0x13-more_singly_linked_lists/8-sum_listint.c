#include "lists.h"

/**
 * sum_listint - returns the sum of all the data linked list
 * @head: pointer to head listint_t list
 * Return: sum of values
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
	{
		sum += head->n;
	}

	return (sum);
}
