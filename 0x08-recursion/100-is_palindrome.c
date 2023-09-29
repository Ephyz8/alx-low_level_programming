#include "main.h"
/**
 * strlen_recur - function to check
 * @s: parameter
 * Return: lenght of a string
 */
int strlen_recur(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recur(s + 1));
}

/**
 * comp_string - compares string
 * @s: parameter
 * @t: smallest iterator
 * @r: lagerst iterator
 * Return: int
 */
int comp_string(char *s, int t, int r)
{
	if (*(s + t) == *(s + r))
	{
		if (t == r || t == r + 1)
			return (1);
		return (0 + comp_string(s, t + 1, r - 1));
	}
	return (0);
}
/**
 * is_palindrome - detects palindrome
 * @s: the string to test
 * Return: 1 and 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp_string(s, 0, strlen_recur(s) - 1));
}
