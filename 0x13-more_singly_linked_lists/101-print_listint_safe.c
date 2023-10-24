#include "lists.h"
/**
 * free_lst - free a linked list
 * @head: pointer of first element in list
 * Return: void
 */

void free_lst(lst_t **head)
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
 * print_listint_safe -  prints a listint_t linked list
 * @head: head of a list
 * Return: void
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	lst_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(lst_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_lst(&hptr);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	free_lst(&hptr);
	return (node);
}
