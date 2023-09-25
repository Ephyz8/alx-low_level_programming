#include "main.h"
#include <stddef.h>
/**
 * _strchr - function to locate a character in a string
 * @s: string parameter
 * @c: character parameter
 * Return: s and NULL
 */


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
