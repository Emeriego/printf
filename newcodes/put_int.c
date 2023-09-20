#include "main.h"
/**
 * put_int - Print an integer
 * @my_args: The argument list
 *
 * Return: The number of characters printed
 */
int put_int(va_list my_args)
{
	int n = va_arg(my_args, int);
	int numbs, final = n % 10, numerals, x = 1;
	int  q = 1;

	n = n / 10;
	numbs = n;

	if (final < 0)
	{
		_putchar('-');
		numbs = -numbs;
		n = -n;
		final = -final;
		q++;
	}
	if (numbs > 0)
	{
		while (numbs / 10 != 0)
		{
			x = x * 10;
			numbs = numbs / 10;
		}
		
		for (numbs = n; x > 0; q++)
		{
			numerals = numbs / x;
			_putchar(numerals + '0');
			numbs = numbs - (numerals * x);
			x = x / 10;
		}
	}
	_putchar(final + '0');

	return (q);
}