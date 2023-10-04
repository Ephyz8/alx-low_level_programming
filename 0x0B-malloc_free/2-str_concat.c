#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: secong string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	for (len2 = 0; s2[len2] != '\0'; len2++)
	ptr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (len1 = 0; s1[len1] != '\0'; len1++)
		ptr[len1] = s1[len1];
	for (len2 = 0; s2[len2] != '\0'; len2++)
		ptr[len1 + len2] = s2[len2];
	return (ptr);
}
