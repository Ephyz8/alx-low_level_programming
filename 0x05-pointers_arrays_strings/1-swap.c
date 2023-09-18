#include "main.h"

/**
 * swap_int - swaps integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: Always 0
 */


void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
