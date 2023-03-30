#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node - adds new node at the beginning of list_t list
* @head: pointer to pointer to list_t list
* @str: string to copy to new node
* Return: address of new element, or NULL
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
