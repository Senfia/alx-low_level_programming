#include "lists.h"

/**
* free_listint - adds a new node at the end of a listint_t list
* @head: pointer to listint_t list
* Return: void
**/

void free_listint(listint_t *head)
{
	listint_t *current_nod;

	while (head != NULL)
	{
		current_nod = head;

		head = head->next;

		free(current_nod);
	}
}
