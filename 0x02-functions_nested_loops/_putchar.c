#include <unistd.h>

/**
 * _putchar - Entry point
 * @c: Print the character
 * Return: Onsuccess 1.
 * On error, -1 isreturned, andthe error is set accordingly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
