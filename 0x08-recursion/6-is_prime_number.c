#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Returns a prime number
 * @n: The number
 *
 * Return: Value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check prime number
 * @n: The number
 * @i: The iterate value
 *
 *
 * Return: 1 for prime or 0 composite
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	return (0);

	if (n % i == 0 && i > 1)
	return (0);

	if ((n / i) < i)
	return (1);

	return (check_prime(n, i + 1));
}