#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: input
 * @c: input
 * Return: 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (s + b);
	}
	return (NULL);
}
