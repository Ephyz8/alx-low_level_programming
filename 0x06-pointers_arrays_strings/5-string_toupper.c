#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - function
 * @str: string
 * Return: string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return (str);
}
