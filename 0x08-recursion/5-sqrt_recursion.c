#include <stdio.h>

/**
 * _sqrt_h - function helper
 * @a: parameter
 * @b: parameter
 * Return: return -1
 */

int _sqrt_h(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt_h(a, b + 1));
}
/**
 * _sqrt_recursion - function that return natural square root
 * @n: parameter
 * Return: natural number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_h(n, 0));
}
