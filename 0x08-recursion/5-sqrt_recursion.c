#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -Returns square root
 * @n: The number to calculate
 * @i: The number
 *
 * Return: The square root
 */

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates square root
 * @n: The number to calculate
 * @i: Iterate number
 *
 * Return: The square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	return (-1);

	if (sqrt == n)
	return (i);

	return (_sqrt(n, i + 1));
}
