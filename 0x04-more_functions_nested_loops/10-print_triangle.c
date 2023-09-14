#include "main.h"
/**
 * print_triangle - function that prints a pattern
 * @size: size of pattern
 * Return: Always 0
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');


	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');
	}
	for (j = 1; j <= i; j++)
		_putchar('#');
	_putchar('\n');
}
