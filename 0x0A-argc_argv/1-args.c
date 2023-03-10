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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
