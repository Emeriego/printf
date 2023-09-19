#include "main.h"

/**
 * put_str7 - Print a string
 * @my_args: Arguments list
 * Return: Number of characters printed
 */
int put_str7(va_list my_args)
{
	char *str = va_arg(my_args, char *);
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}

/**
 * put_char7 - Print a character
 * @my_args: Arguments list
 * Return: Number of characters printed
 */
int put_char7(va_list my_args)
{
	char c = va_arg(my_args, int);

	_putchar(c);
	return (1);
}

/**
 * put_percent7 - Print a percent character
 * @my_args: Arguments list
 * Return: Number of characters printed
 */
int put_percent7(va_list my_args)
{
	(void)my_args;

	_putchar('%');
	return (1);
}
