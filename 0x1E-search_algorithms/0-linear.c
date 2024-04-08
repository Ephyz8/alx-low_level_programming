#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * If value is not present in array or if array is NULL return -1.
 *
 * Return: first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (!array || size <= 0)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value) /* if (*(array + j) == value) */
			return (j);
	}
	return (-1);
}
