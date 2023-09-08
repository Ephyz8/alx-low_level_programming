#include <stdio.h>

/**
 * main - main function
 *
 * Return: this will be 0 always
 */

int main(void)
{
	int digit1 = 0, digit2;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');

				if (digit1 + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;

		}
		digit1++;
	}
	putchar('\n');

	return (0);
}
