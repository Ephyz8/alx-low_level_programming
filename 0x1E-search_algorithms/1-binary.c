#include "search_algos.h"

/**
 * binary_search - function that searches for array value in array sorted array
 * of integers using Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * You can assume that value won’t appear more than once in array.
 * If value is not present in array or if array is NULL return -1.
 *
 * Return: the index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}

/**
 * binary_search_index - recursive function for helping binary_search.
 * @array: pointer to the first element of the array to search in.
 * @x: left index of array.
 * @y: right index of array.
 * @value: value to look for.
 *
 * You can assume that value won’t appear more than once in array.
 * If value is not present in array or if array is NULL return -1.
 *
 * Return: the index where value is located.
 */
int binary_search_index(int *array, size_t x, size_t y, int value)
{
	int mid_index;

	/* if x is ever > y, it means the element is not in the array */
	if (!array || x > y)
		return (-1);
	print_array(array, x, y);

	/* find the mid_index-way index between index x and index y */
	mid_index = x + (y - x) / 2;

	if (x == y)
		return (*(array + mid_index) == value ? (int)mid_index : -1);

	/* if we've found the element at the mid_index-way index, return the index */
	if (array[mid_index] == value)
		return (mid_index);
	/**
	 * else if the element MUST be in the left-portion of the portion of the
	 * array we are currently looking at, search for it in this portion
	 */
	else if (array[mid_index] > value)
		return (binary_search_index(array, x, mid_index - 1, value));
	/**
	 * else if the element MUST be in the right-portion of the portion of the
	 * array we are currently looking at, search for it in this portion
	 */
	else
		return (binary_search_index(array, mid_index + 1, y, value));
}

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @x: The left index of the array.
 * @y: The right index of the array.
 */
void print_array(int *array, size_t x, size_t y)
{
	size_t j;

	if (array)
	{
		printf("Searching in array: ");
		for (j = x; j < x + (y - x + 1); j++)
			printf("%d%s", *(array + j), j < x + (y - x) ? ", " : "\n");
	}
}