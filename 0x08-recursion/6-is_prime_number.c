#include "main.h"

/**
 * is_prime_helper - function for prime helper
 * @a: number
 * @b: divisor
 * Return: returns 0
 */

int is_prime_helper(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
		return (0);
	else if (a == b)
		return (1);
	return (is_prime_helper(a, b + 1));
}

/**
 * is_prime_number - function
 * @n: input
 * Return: 0 or -1
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
