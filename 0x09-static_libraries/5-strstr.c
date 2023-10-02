#include <stdio.h>
#include <string.h>

/**
 * _strstr - function takes two arguments
 * @haystack: character
 * @needle: substring
 * Return: return null
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
