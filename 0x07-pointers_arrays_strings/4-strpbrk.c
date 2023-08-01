#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: first occurrence in the string
 * @accept: string
 * Return: 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int a, d;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{

			if (s[a] == accept[d])
					return (s + a);
		}
	}
	return (NULL);
}
