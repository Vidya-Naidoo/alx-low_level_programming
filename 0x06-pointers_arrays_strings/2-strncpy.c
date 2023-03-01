#include "main.h"

/**
 * _strncpy - Copies an input number of bytes
 * @dest: The buffer
 * @src: The string
 * @n: The max number of bytes copied
 * Return: A pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
