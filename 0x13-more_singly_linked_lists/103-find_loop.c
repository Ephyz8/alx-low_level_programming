#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list
 *
 * Return: address of the node where the loop starts, or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1;
	listint_t *p2;

	p1 = head;
	p2 = head;
	while (head && p1 && p2->next)
	{
		head = head->next;
		p1 = p1->next->next;

		if (head == p1)
		{
			head = p2;
			p2 = p1;
			while (1)
			{
				p1 = p2;
				while (p1->next != head && p1->next != p2)
				{
					p1 = p1->next;
				}
				if (p1->next == head)
					break;
				head = head->next;
			}
			return (p1->next);
		}
	}
	return (NULL);
}
