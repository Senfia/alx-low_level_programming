#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
* add_nodeint - adds new node at the beginning of listint_t list
* @head: pointer to pointer to list_t list
* @n: node to copy to new node
* Return: address of new element, or NULL
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nod = malloc(sizeof(listint_t));

	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->next = *head;
	*head = new_nod;

	return (new_nod);
}
