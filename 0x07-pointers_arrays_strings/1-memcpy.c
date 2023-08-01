#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: Destination
 * @src: Source
 * @n: input
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	return (dest);
}
