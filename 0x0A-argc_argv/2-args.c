#include "main.h"
#include <stdio.h>

/**
 * main- Prints number
 * @argc: Argument count
 * @argv: Arument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
