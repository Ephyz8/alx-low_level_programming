#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - function
 * @s: parameter
 * Return: void
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
