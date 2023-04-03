#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head listint_t list
 * @index: the index of the node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (head);
}
