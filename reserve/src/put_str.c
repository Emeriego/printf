#include "main.h"

/**
 * put_str - Print a string
 * @my_args: The argument list
 *
 * Return: The number of characters in the string (excluding the null byte)
 */

int put_str(va_list my_args)
{
	int character_count = 0;
	char *str = va_arg(my_args, char *);

	if (!str)
	{
		str = "(null)";
	}
	while (*str)
	{
		_putchar(*str);
		character_count++;
		str++;
	}
	return (character_count);
}
