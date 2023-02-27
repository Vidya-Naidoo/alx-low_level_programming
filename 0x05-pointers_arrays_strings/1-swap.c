#include <stdio.h>

/**
 * swap_int - Swaps the two integers
 * @a: The first integer
 * @b:The second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/* The function that swaps the values. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
