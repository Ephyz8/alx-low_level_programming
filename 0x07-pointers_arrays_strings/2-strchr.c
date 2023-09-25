#include "main.h"
/**
 * _strchr - function to locate a character in a string
 * @s: string parameter
 * @c: character parameter
 * Return: s and NULL
 */


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s['\0'] == c)
			return (s + i);
		s++;
	}
	return ('\0');
}
