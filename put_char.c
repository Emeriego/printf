#include "main.h"

/**
 * put_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int put_char(va_list my_args)
{
	char c;

	c = va_arg(my_args, int);
	_putchar(c);
	return (1);
}