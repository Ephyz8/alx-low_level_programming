#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of characters
 * @size: an input for the size of the array
 * @c: to store the strings of charatcter
 * Return: a pointer
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
