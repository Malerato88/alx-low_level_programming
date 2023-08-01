#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input
 * @size: input
 * Return: 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int b, c, sum1 = 0, sum2 = 0;

	for (b = 0; b <= (size * size); b = b + size + 1)
		sum1 = sum1 + a[b];

	for (c = size - 1; c <= (size * size) - size; c = c + size - 1)
		sum2 = sum2 + a[c];
	printf("%d, %d\n", sum1, sum2);
}
