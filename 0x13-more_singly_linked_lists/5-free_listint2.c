#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to listint_t list
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *current2;

	if (!head || !(*head))
		return;
	current = *head;
	while (current != NULL)
	{
		current2 = current;
		current = current->next;
		free(current2);
	}
	*head = NULL;
}
