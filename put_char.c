#include "main.h"

/**
 * _putchar - writes the character c to standard output
 * @c: The character to print to the screen
 *
 * Return: 0 on success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
