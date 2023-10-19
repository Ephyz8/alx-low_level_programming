#include "lists.h"

/**
 * print_list - prints all elements in the list_t list
 * @h: singly linked lis
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
