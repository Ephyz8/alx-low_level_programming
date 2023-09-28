#include <stdio.h>

/**
 * _print_rev_recursion - function prints in reverse in recursion
 * @s: string
 * Return: returns 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
