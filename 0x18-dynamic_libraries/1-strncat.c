#include "main.h"

/**
 * _strncat - conctenetes two strings
 * @dest: destination string
 * @src: soyrce string
 * @n: character
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;

	for  (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
