#include "main.h"

/**
 * put_char - prints a char.
 * @my_args: arguments.
 * Return: 1.
 */
int put_char(va_list my_args)
{
	char ch;

	ch = va_arg(my_args, int);
	_putchar(ch);
	return (1);
}
