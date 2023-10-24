#include "lists.h"
/**
 * free_lst2 - free a linked list
 * @head: pointer of first element in list
 * Return: void
 */

void free_lst2(lst_t **head)
{
	lst_t *ptr;
	lst_t *ptr2;

	if (head != NULL)
	{
		ptr2 = *head;
		while ((ptr = ptr2) != NULL)
		{
			ptr2 = ptr2->next;
			free(ptr);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a listint_t list.
 * @h: head of a list
 * Return: void
 */

size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	lst_t *hptr, *new, *add;
	listint_t *ptr2;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(lst_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_lst2(&hptr);
				return (node);
			}
		}
		ptr2 = *h;
		*h = (*h)->next;
		free(ptr2);
		node++;
	}
	*h = NULL;
	free_lst2(&hptr);
	return (node);
}
