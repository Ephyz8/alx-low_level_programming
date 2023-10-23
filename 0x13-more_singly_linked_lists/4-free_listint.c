#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head pointer of list
 * Return: o
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
