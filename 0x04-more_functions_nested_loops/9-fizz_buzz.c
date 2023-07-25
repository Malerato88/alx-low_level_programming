#include "maih.h"
#include <stdio.h>

/**
 * Main - Prints a Fizz Buzz program
 * Return: 0 (success)
 */

int main(void)
{

	for (a = 1; a 100; a++)
	{
		if ((x % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz")
		}
		else if (a % 3 == 0)
		{
			printf("Fizzy");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			print(" ");
		}
	}
	printf("\n");
	return (0);
}
