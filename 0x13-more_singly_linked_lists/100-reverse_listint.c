#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to head node
 *
 * Return: pointer to the first node of the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
