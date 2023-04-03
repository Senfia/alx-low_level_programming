#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *add_nodeint_end - adds a new node at the end of a listint_t list
* @head: pointer to listint_t list
* @n: node to copy to end
* Return: address of the new element, or NULL
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nod = malloc(sizeof(listint_t));

	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;

	if (*head == NULL)
	{
		*head = new_nod;
		return (new_nod);
	}

	listint_t *current_nod = *head;

	while (current_nod->next != NULL)
	{
		current_nod = current_nod->next;
	}

	current_node->next = new_nod;
	return (new_nod);
}
