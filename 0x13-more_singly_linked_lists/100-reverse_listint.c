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
	/*listint_t *current = *head;*/
	listint_t *prev, *current;

	if (!(*head))
		return (*head);

	current = *head;

	while (current->next)
	{
		prev = current->next;
		current->next = prev->next;
		prev->next = *head;
		*head = prev;
	}

	/**head = prev;*/
	return (*head);
}
