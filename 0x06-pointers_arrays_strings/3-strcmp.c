#include "main.h"

/**
 * _strcmp - Compares pointers to two strings
 * @s1: Pointer to compare firt string
 * @s2: pointer to compare second string
 * Return: negative, 0 or positive difference.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
