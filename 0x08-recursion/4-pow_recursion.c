#include "main.h"

/**
 * _pow_recursion - Returns the value
 * @x: The value to multiply
 * @y: The times to multiply
 *
 * Return: The final value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}
