#include <stdio.h>

/**
 * main - main function
 *
 * Return: this will be 0 always
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');

	return (0);
}
