#include "lists.h"
/**
 * pop_listint - deletes the head node and returns head the next node
 * @head: pointer to pointer to listint_t list
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (*head == NULL)
		return (0);
	current = *head;
	n = temp->n;
	*head = (*(*head)).next;
	free(current);

	return (n);
}
