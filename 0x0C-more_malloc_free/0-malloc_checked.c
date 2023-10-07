#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory
 * @b: size of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
