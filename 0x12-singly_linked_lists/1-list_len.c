#include "lists.h"

/**
 * list_len - find the length of the list
 * @h: singly linked list
 * Return: length of node
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
