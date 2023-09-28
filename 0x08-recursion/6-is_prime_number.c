#include <stdio.h>

/**
 * is_prime_number - function for prime number
 * is_prime_helper - function for prime helper
 * @n: number
 * @divisor: number
 * Return: returns 0
 */

int is_prime_number(int n) 

int is_prime_helper(int n, int divisor);
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor + 1));
}
