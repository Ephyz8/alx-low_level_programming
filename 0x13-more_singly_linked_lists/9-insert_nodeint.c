#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first element pointer
 * @idx: index position to the new node
 * @n: data of new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = (*head);
	listint_t *ptr2;

	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;

	if (ptr == NULL)
        {
                ptr = ptr2;
        }

	if (idx == 0)
		*head = ptr2;

	idx--;
	while (idx != 0)
	{
		ptr = ptr->next;
		idx--;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr2);



}
