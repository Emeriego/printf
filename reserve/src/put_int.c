#include "main.h"
/**
 * put_int - Print an integer
 * @my_args: The argument list
 *
 * Return: The number of characters printed
 */
int put_int(va_list my_args)
{
	int num = va_arg(my_args, int);
	int count = 0;

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
	{
		count += put_int(my_args);
	}
	count += _putchar('0' + (num % 10));
	return (count);
}