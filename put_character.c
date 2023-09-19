#include "main.h"

/**
 * put_character - Print a character
 * @my_args: The argument list
 *
 * Return: 1 if successful
 */

int put_character(va_list my_args)
{
	char character = va_arg(my_args, int);

	_putchar(character);
	return (1);
}
