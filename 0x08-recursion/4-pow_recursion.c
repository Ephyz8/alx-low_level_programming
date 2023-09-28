#include <stdio.h>

/**
 * _pow_recursion - power function
 * @x: character
 * @y: character
 * Return: return 1 or -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
