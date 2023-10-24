#include "lists.h"

/**
 * new_node - creates new node
 * @n: data of the node
 * Return: pointer to the node
 */

listint_t *new_node(int n)
{
	listint_t *ptr2;

	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;
	return (ptr2);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first element pointer
 * @idx: index position to the new node
 * @n: data of new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *nptr;
	listint_t *node;

	ptr = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	node = new_node(n);
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	if (idx == 0)
		*head = node;
	for (i = 0; i < idx - 1 && ptr != NULL && idx != 0; i++)
		ptr = ptr->next;
	if (ptr == NULL)
		return (NULL);
	if (idx == 0)
		node->next = ptr;
	else
	{
		nptr = ptr->next;
		ptr->next = node;
		node->next = nptr;
	}
	return (node);
}
