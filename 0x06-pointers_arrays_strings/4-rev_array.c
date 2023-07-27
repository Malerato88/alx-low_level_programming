#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array
 * @n: number of elements of the array
 * Return: void 
 */

void reverse_array(int *a, int n)
{
	int c;
	int k;

	for (c = 0; c < k--; c++)
	{
		k = a[c];
		a[c] = a[n];
		a[n] = k;
	}
}
