#include "lists.h"

/**
 * listint_len - function that prints all the elements of a listint_t list.
 * @h: head pointer
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
