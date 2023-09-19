#include "main.h"

/**
 * put_unsigned_decimal - a function that writes signed decimal integer
 * @my_args:variadic arguments
 * Return:the number of characters printed
*/
int put_unsigned_decimal(va_list my_args)
{
	char n;
	int size;
	unsigned int t;
	unsigned int number;

	t = va_arg(my_args, unsigned int);
	number = t;
	if (t == 0)
	{
		n = '0';
		write(STDOUT_FILENO, &n, 1);
		return (1);
	}
	size = 0;

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
