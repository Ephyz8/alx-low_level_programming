#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the head
 * Return: A pointer to first element of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptr2;

	if (head == NULL || *head == NULL)
		return (NULL);
	ptr = *head;
	*head = ptr->next;
	ptr->next = NULL;

	while (*head != NULL)
	{
		ptr2 = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		if (ptr2 == NULL)
			return (*head);
		*head = ptr2;
	}
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	return (NULL);
}
