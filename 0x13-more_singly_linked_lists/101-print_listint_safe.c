#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer first element of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t cnt = 0;
	const listint_t *temp;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		cnt++;
		temp = head;

		head = head->next;

		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}

	return (cnt);
}
