#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
	int c = 0;
	int d;

	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 1)
	{
		d = (c - 1) / 2;
		d += 1;
	}
	else
	{
		d = c / 2;
	}

	for (; d < c; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
