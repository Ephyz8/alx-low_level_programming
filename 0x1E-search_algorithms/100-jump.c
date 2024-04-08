#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump_sech search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump_sech step_w.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t j, jump_sech, step_w;

	if (array == NULL || size == 0)
		return (-1);

	step_w = sqrt(size);
	for (j = jump_sech = 0; jump_sech < size && array[jump_sech] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump_sech, array[jump_sech]);
		j = jump_sech;
		jump_sech += step_w;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", j, jump_sech);

	jump_sech = jump_sech < size - 1 ? jump_sech : size - 1;
	for (; j < jump_sech && array[j] < value; j++)
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	printf("Value checked array[%ld] = [%d]\n", j, array[j]);

	return (array[j] == value ? (int)j : -1);
}
