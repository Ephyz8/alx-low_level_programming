#include <stdio.h>

/**
 * main - main function
 *
 * Return: this will be 0 always
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
