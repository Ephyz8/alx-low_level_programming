#include <stddef.h>

/**
 * _memcpy - function
 * @dest: - character
 * @src: - character
 * @n: - character
 * Return: return start
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (start);
}
