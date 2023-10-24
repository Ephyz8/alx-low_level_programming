#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: pointer to the beginning of the list
 * @index: index of node to be freed
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *node;

	ptr = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && ptr != NULL && index != 0; i++)
		ptr = ptr->next;
	if  (ptr == NULL)
		return (-1);
	if (index == 0)
	{
		node = ptr->next;
		free(ptr);
		*head = node;
	}
	else
	{
		if (ptr->next == NULL)
			node = ptr->next;
		else
			node = ptr->next->next;
		free(ptr->next);
		ptr->next = node;
	}
	return (1);
}
