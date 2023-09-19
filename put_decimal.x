#include "main.h"

/**
 * put_decimal - This function writes a signed decimal integer.
 *
 * @my_args: Va_list for the variadic function.
 * The function expects the next variable
 * in this list to be an integer.
 *
 * Return: The number of characters printed
 */
int put_decimal(va_list my_args)
{
	char n;
	int size, t;
	unsigned int number;

	t = va_arg(my_args, int);
	if (t == 0)
	{
		n = '0';
		write(STDOUT_FILENO, &n, 1);
		return (1);
	}
	size = 0;
	if (t < 0)
	{
		n = '-';
		write(STDOUT_FILENO, &n, 1);
		size = 1;
		number = t * -1;
	}
	else
	{
		number = t;
	}
	t = 1;
	while ((number / t) > 9)
		t *= 10;

	for (; t != 0; t /= 10)
	{
		n = '0' + (number / t);
		write(STDOUT_FILENO, &n, 1);
		number %= t;
		size++;
	}

	return (size);
}
