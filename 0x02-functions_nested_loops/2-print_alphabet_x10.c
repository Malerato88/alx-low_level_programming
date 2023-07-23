#include "main.h"

/**
 * print_alphabet_x10
 * Return: void
 */

void print_alphabet_x10(void)

{
	char b;
	int c = 0;

	while (c <= 9)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
			_putchar('\n');
				c++;
	}
}
