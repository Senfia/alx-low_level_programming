#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_list - function that free a list_t list.
* @head: pointer to list_t
* Return: 0
**/
void free_list(list_t *head)
{
	list_t *tp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
	free(head->str);
	free(head);
}
