#include "search_algos.h"

/**
 * linear_skip - Searches for an algorithm in a sorted singly
 *               linked list of integers using linear skip.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         else, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *nod, *jmp;

	if (list == NULL)
		return (NULL);

	for (nod = jmp = list; jmp->next != NULL && jmp->n < value;)
	{
		nod = jmp;
		if (jmp->express != NULL)
		{
			jmp = jmp->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jmp->index, jmp->n);
		}
		else
		{
			while (jmp->next != NULL)
				jmp = jmp->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nod->index, jmp->index);

	for (; nod->index < jmp->index && nod->n < value; nod = nod->next)
		printf("Value checked at index [%ld] = [%d]\n", nod->index, nod->n);
	printf("Value checked at index [%ld] = [%d]\n", nod->index, nod->n);

	return (nod->n == value ? nod : NULL);
}