#include "main.h"
/**
 * _strspn - Function to calculate length of a prefix sbstring
 * @s: parameter
 * @accept: parameter
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int isAcceptChar[256] = {0};

	while (*accept != '\0')
	{
		isAcceptChar[(unsigned char)*accept] = 1;
		accept++;
	}

	while (*s != '\0' && isAcceptChar[(unsigned char)*s])
	{
		count++;
		s++;
	}
	return (count);
}
