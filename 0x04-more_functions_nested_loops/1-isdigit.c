#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @a: The number to be checked
 * Return: 1 for character that will be a digit or 0 for anything else
 */

int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}
