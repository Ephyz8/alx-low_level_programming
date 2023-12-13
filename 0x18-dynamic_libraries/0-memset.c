#include <stddef.h>

/**
 * _memset - functio that fills memory with a constant byte
 * @b: - a constant
 * @s: - a constant
 * @n: - a constant
 * Return: return start
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;

	}
	return (start);
}
