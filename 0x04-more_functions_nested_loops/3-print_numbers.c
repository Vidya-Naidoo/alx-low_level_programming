#include "main.h"

/**
 * print_numbers - Print the numbers from 0 to 9
 * Return: The numbers 0 to 9
 */

void print_numbers(void)
{
	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}
