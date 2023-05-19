#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list in reverse order.
 * @head: Pointer to the start of the list.
 * Return: None.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *nextNode;

	for (current = head; current != NULL; current = nextNode)
	{
		nextNode = current->next;

	free(current);
	}
}
