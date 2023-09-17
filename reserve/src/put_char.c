#include "main.h"

/**
 * put_char - Print a character
 * @my_args: The argument list
 *
 * Return: 1 if successful
 */

int put_char(va_list my_args)
{
	char character = va_arg(my_args, int);

	_putchar(character);
	return (1);
}
